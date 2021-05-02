// 本题要求编写程序，输出给定正整数M和N区间内的所有三位水仙花数。三位水仙花数，即其个位、十位、百位数字的立方和等于该数本身。

// 输入格式:
// 输入在一行中给出两个正整数M和N（100≤M≤N≤999）。

// 输出格式:
// 顺序输出M和N区间内所有三位水仙花数，每一行输出一个数。若该区间内没有三位水仙花数，则无输出。

// 如果M或者N不符合题目的要求，则输出Invalid Value.。

// 输入样例1:
// 100 400
// 输出样例1:
// 153
// 370
// 371
// 输入样例2:
// 500 600
// 输出样例2:
// 输入样例3：
// 990 101
// 输出样例3：
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