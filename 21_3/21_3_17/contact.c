#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

void InitContact(struct Contact* ps)
{
	ps->data = (PeoInfo*)malloc(3 * sizeof(PeoInfo));
	if (ps->size == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
	//���ļ����ѱ������Ϣ���ص�ͨѶ¼��
	LoadContact(ps);
}

void CheckCapacity(struct Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		struct PeoInfo* ptr= realloc(ps->data, (ps->capacity + 2) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
}

void LoadContact(Contact* ps)
{
	PeoInfo tmp = { 0 };
	FILE* pfRead = fopen("contact.dat","rb"); 
	if (pfRead == NULL)
	{
		printf("LoadContact:: %s\n", strerror(errno)); 
		return;
	}
	//��ȡ�ļ�����ŵ�ͨѶ¼��
	while (fread(&tmp, sizeof(PeoInfo),1,pfRead)) 
	{
		CheckCapacity(ps);
		ps->data[ps->size] = tmp; 
		ps->size++;
	}
	fclose(pfRead); 
	pfRead = NULL;
}


void AddContact(struct Contact* ps)
{
	//��⵱ǰͨѶ¼����
	CheckCapacity(ps);
	printf("����������:>");
	scanf("%s", ps->data[ps->size].name);
	printf("����������:>");
	scanf("%d", &(ps->data[ps->size].age));
	printf("�������Ա�:>");
	scanf("%s", ps->data[ps->size].sex);
	printf("������绰:>");
	scanf("%s", ps->data[ps->size].tele);
	printf("�������ַ:>");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("���ӳɹ�\n");

}
static int FindByName(const struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(name, ps->data[i].name))
		{
			return i;
		}
		
	}
	return -1;
}

void DelContact(struct Contact* ps)
{
	printf("������ɾ��������\n");
	char name[MAX_NAME];
	scanf("%s", &name);
	//����Ҫɾ��������ʲôλ��
	//�ҵ��˷�����������Ԫ���±�
	//�Ҳ������� -1
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		//ɾ������
		int j = 0;
		for (j = pos; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}

void SearchContact(const struct Contact* ps)
{
	printf("������Ҫ���ҵ�����\n");
	char name[MAX_NAME];
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
	}
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		for ( i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}

void ModifyContact(struct Contact* ps)
{
	printf("��������Ҫ�޸ĵ�����\n");
	char name[MAX_NAME];
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", ps->data[pos].name);
		printf("����������:>");
		scanf("%d", &(ps->data[pos].age));
		printf("�������Ա�:>");
		scanf("%s", ps->data[pos].sex);
		printf("������绰:>");
		scanf("%s", ps->data[pos].tele);
		printf("�������ַ:>");
		scanf("%s", ps->data[pos].addr);
		printf("�޸����\n");
	}
}

void SortContact(struct Contact* ps)
{	
		//����
		for(int y = 0; y < ps->size - 1; y++) 
		{
			for (int w = y + 1; w < ps->size; w++)
			{
				if (0 < strcmp(ps->data[y].name,ps->data[w].name))
				{
					struct PeoInfo j = ps->data[y];
					ps->data[y] = ps->data[w];
					ps->data[w] = j;
				}
			}
		} 
	printf("�������\n");
	int i = 0;
	printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < ps->size; i++)
	{
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[i].name,
			ps->data[i].age,
			ps->data[i].sex,
			ps->data[i].tele,
			ps->data[i].addr);
	}
}

void DestoryContact(Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}

void SaveContact(Contact* ps) 
{
	FILE* pfWrite = fopen("contact.dat", "wb"); 
	if (pfWrite == NULL)
	{
		printf("SaveContact: %s\n", strerror(errno)); 
		return;
	}
	// дͨѶ¼�����ݵ�Ϊ�ļ���
	int i = 0;
	for (i = 0; i < ps->size; i++) {
		fwrite(&(ps->data[i]),sizeof(PeoInfo),1,pfWrite);
	}
	fclose(pfWrite); 
	pfWrite = NULL;
	printf("����ɹ�\n");
}