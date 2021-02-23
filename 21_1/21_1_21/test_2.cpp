#include<stdio.h>
#include<stdlib.h>
int add(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{

    return x - y;
}
int mul(int x, int y)
{
    return x * y;
}
int Div(int x, int y)
{
    return x / y;
}
int main()
{   

    int (*parr[4])(int, int) = {add, sub, mul, Div};
    for(int i = 0;i < 4;i++)
    {
        printf("%d\n",parr[i](2,3));
    }
    system("pause");
    return 0;
}