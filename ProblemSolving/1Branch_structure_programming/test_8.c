// 本题要求编写程序将一个百分制成绩转换为五分制成绩。转换规则：

// 大于等于90分为A；
// 小于90且大于等于80为B；
// 小于80且大于等于70为C；
// 小于70且大于等于60为D；
// 小于60为E。
// 输入格式:
// 输入在一行中给出一个整数的百分制成绩。

// 输出格式:
// 在一行中输出对应的五分制成绩。

// 输入样例:
// 90
// 输出样例:
// A
#include <stdio.h>
 
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        switch(n/10)
        {
            case 10:
            case  9:printf("A\n");break;
            case  8:printf("B\n");break;
            case  7:printf("C\n");break;
            case  6:printf("D\n");break;
            default:printf("E\n");break;
        }
    }
    return 0;
}