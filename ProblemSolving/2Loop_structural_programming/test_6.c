// ����Ҫ��ͳ�Ƹ�������M��N�����������ĸ�������������͡�

// �����ʽ:
// ������һ���и�������������M��N��1��M��N��500����

// �����ʽ:
// ��һ����˳�����M��N�����������ĸ����Լ����ǵĺͣ����ּ��Կո�ָ���

// ��������:
// 10 31
// �������:
// 7 143
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{  
    int a,b,i,m,l=0,sum=0,count=0;
    scanf("%d %d",&a,&b);
    if (a>b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    for(i=a;i<=b;i++)
    {
        for(m=1;m<=i;m++)
        {
            if(i%m!=0) 
            {
                l++;
            }
        }
        if(l==i-2) 
        {
            sum=sum+i; 
            count++;
        }
        l=0;
    }
    printf("%d %d",count,sum);
    system("pause");
  return 0;
}

