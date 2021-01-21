#include<stdio.h>
#include<stdlib.h>
void meun()
{
    printf("*****************\n");
    printf("**1.add   2.sub**\n");
    printf("**3.mul   4.div**\n");
    printf("**5.xor   0.exit*\n");
    printf("*****************\n");
}
int Add(int x, int y)
{
    return x + y;
}
int Sub(int x, int y)
{

    return x - y;
}
int Mul(int x, int y)
{
    return x * y;
}
int Div(int x, int y)
{
    return x / y;
}
int Rox(int x,int y)
{
    return x ^ y;
}
int main()
{   
    meun();
    int x = 0;
    int y = 0;
    int input = 0;
    int (*pfarr[])(int, int) = {0, Add, Sub, Mul ,Div, Rox };
    do
    {   
        printf("请输入:\n");
        scanf("%d",&input);
        if (input > 0 && input < 5 )
        {
            printf("请输入两个操作数：>\n");
            scanf("%d%d",&x,&y);
            printf("%d",(*pfarr[input])(x, y));
        }
        else if (input == 0)
        {
            printf("退出\n");
        }
        else
        {
            printf("输入错误，请重新输入\n");
        }
        
    } while (input);
    system("pause");
    return 0;
}