// ����Ҫ���д�����������������M��N�����ڵ�������λˮ�ɻ�������λˮ�ɻ����������λ��ʮλ����λ���ֵ������͵��ڸ�������

// �����ʽ:
// ������һ���и�������������M��N��100��M��N��999����

// �����ʽ:
// ˳�����M��N������������λˮ�ɻ�����ÿһ�����һ����������������û����λˮ�ɻ��������������

// ���M����N��������Ŀ��Ҫ�������Invalid Value.��

// ��������1:
// 100 400
// �������1:
// 153
// 370
// 371
// ��������2:
// 500 600
// �������2:
// ��������3��
// 990 101
// �������3��
// Invalid Value.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,count = 0,num = 0;
    int ge,shi,bai;
    scanf("%d%d",&a,&b);
    if(a<=b&&a>=100&&b>=100&&b<=999)
    {
        if(a>b)
        {
            int temp = a;
            a = b;
            b = temp;
        }
        for(num = a;num<b;num++)
        {
            ge = num/10/10%10;
            shi = num/10%10;
            bai = num%10;
            if(num == ge*ge*ge+shi*shi*shi+bai*bai*bai)
            {
                printf("%d\n",num);
                count++;
            }
        }
    }    
    else
    {
        printf("Invalid Value.");
    }
    
    system("pause");
    return 0;
}