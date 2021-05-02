// 本题要求统计给定整数M和N区间内素数的个数并对它们求和。

// 输入格式:
// 输入在一行中给出两个正整数M和N（1≤M≤N≤500）。

// 输出格式:
// 在一行中顺序输出M和N区间内素数的个数以及它们的和，数字间以空格分隔。

// 输入样例:
// 10 31
// 输出样例:
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

