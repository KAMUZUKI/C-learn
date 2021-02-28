#include "contact.h"
#include "contact.c"
void menu()
{
	printf("********************************\n");
	printf("**** 1.add          2.del   ****\n");
	printf("**** 3.search       4.modify****\n");
	printf("*****5.show         6.sort  ****\n");
	printf("*****0.exit                 ****\n");
	printf("********************************\n");
}
int main()
{
	int input = 0;
	//����ͨѶ¼
	struct Contact con;

	InitContact(&con);
	//��ʼ��ͨѶ¼
	do
	{
		menu();
		printf("��ѡ��>\n");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			printf("�˳�ͨѶ¼");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}