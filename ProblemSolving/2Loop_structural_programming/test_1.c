// 本题要求编写程序，计算序列 1 + 2 + 3 + ... 的前N项之和。

// 输入格式:
// 输入在一行中给出一个正整数N。

// 输出格式:
// 在一行中按照“sum = S”的格式输出部分和的值S，请注意等号的左右各有一个空格。题目保证计算结果不超过长整型整数的范围。

// 输入样例:
// 100
// 输出样例:
// sum = 5050
#include<stdio.h>
int main()
{
    int num;
    int sum = 0;
    int a = 0;
    scanf("%d",&num);
    for(a = 0;a <= num;a++)
    {
        sum += a; 
    }
    printf("sum = %d",sum);
    return 0;
} 