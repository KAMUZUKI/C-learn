// ��������ˮ�����ֱ���ƻ����apple�����棨pear�������ӣ�orange�������ѣ�grape�������۷ֱ��ӦΪ3.00Ԫ/���2.50Ԫ/���4.10Ԫ/���10.20Ԫ/���

// ��������Ļ����ʾ���²˵���

// [1] apple
// [2] pear
// [3] orange
// [4] grape
// [0] exit
// �û�����������1~4��ѯ��Ӧˮ���ĵ��ۡ���������ѯ��������5��ʱ������Ӧ�Զ��˳���ѯ������5�ζ��û�����0���˳�������������ţ���ʾ�۸�Ϊ0��

// �����ʽ:
// ������һ���и����û�������������ɸ���š�

// �����ʽ:
// ��������Ļ����ʾ�˵���Ȼ���Ӧ�û���ÿ�����룬��һ���а���ʽ��price = �۸������ѯ��������м۸�����λС�������û�������ѯ��������5�Ρ�����������0ʱ�����������

// ��������1:
// 3 -1 0 2
// �������1:
// [1] apple
// [2] pear
// [3] orange
// [4] grape
// [0] exit
// price = 4.10
// price = 0.00
// ��������2:
// 1 2 3 3 4 4 5 6 7 8
// �������2:
// [1] apple
// [2] pear
// [3] orange
// [4] grape
// [0] exit
// price = 3.00
// price = 2.50
// price = 4.10
// price = 4.10
// price = 10.20
#include<stdio.h>
int main()
{
    int choice, i;
    double price;
	
    printf("[1] apple\n");
    printf("[2] pear\n");
    printf("[3] orange\n");
    printf("[4] grape\n");
    printf("[0] exit\n");
    for (i=1;i<=5;i++)
    {
		scanf("%d",&choice);
		if (choice==0)
            break; 
		switch(choice)
        {
            case 1: price = 3.00;break;
	    	case 2: price = 2.50;break;
	    	case 3: price = 4.10;break;
	    	case 4: price = 10.20;break;
	    	default:price = 0.00;break;	
		}
		printf("price = %.2f\n",price);
    } 
	
    return 0; 
 }