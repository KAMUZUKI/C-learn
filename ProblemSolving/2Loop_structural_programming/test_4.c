// 对于给定的正整数N，需要你计算 S=1!+2!+3!+...+N!。

// 输入格式：
// 输入在一行中给出一个不超过10的正整数N。

// 输出格式：
// 在一行中输出S的值。

// 输入样例：
// 3
// 输出样例：
// 9
#include<stdio.h>
int main()
{
    int sum,num,num1;
    scanf("%d",&num);
    int i,j;
    for(i = 1;i<=num;i++)
    {
        num1 = 1;
        for(j = 1;j<=i;j++)
        {
            num1*=j;
        }
        sum += num1;
    }
    printf("%d",sum);
    return 0;
}