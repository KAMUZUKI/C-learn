//��̬�ڴ����
//realloc 
//������̬�����ڴ�Ŀռ��С   
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
int main()
{
    int* p = (int*)malloc(20);
    if (p == NULL)
    {
        printf("%s\n",strerror(errno));
    }
    else
    {
        int i = 0;
        for ( i = 0; i < 5; i++)
        {
            *(p + i) = i;
        }
    }
    //������ʹ��malloc���ٵ�20���ֽڿռ�
    //�������20�����ֽڲ����������ǵ�ʹ����
    //ϣ�������ܹ���40���ֽڵĿռ�
    //����Ϳ���ʹ��realloc��������̬���ٵ��ڴ�

    //realloc����ʹ��ע�����
    //1�����pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
    //2�����pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ�
    //��realloc������������һ���µ��ڴ����򿪱�һ����������Ŀռ䣬
    //���Ұ�ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ�,��󷵻��¿��ٵ��ڴ�ռ��ַ
    //
    int* ptr = (int*)realloc(p,40);
    if (ptr != NULL)
    {
        p = ptr;
        int i = 0;
        for ( i = 5; i < 10; i++)
        {
            *(p + i) = i;
        }
        for ( i = 0; i < 10; i++)
        { 
            printf("%d  ",*(p + i));
        }
    }
    else
    {
        printf("���ٿռ�ʧ��");
    }
    free(p);
    p = NULL;
    

    system("pause");
    return 0;
}