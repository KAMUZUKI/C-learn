//struct结构体
           
#include<stdio.h>
#include<stdlib.h>
struct S
{
    int a;
    char b;
    double c;
};
void Init(struct S* ps)
{
    ps->a = 100;
    ps->b = 'w';
    ps->c = 3.14;
}
//传值
void Print1(struct S tmp)
{
    printf("%d  %c  %lf\n",tmp.a,tmp.b,tmp.c);
}
//传址
void Print2(struct S* ps)
{
    printf("%d  %c  %lf\n",ps->a,ps->b,ps->c);
}
int main ()
{
    struct S s = { 0 };
    Init(&s);
    Print1(s);
    Print2(&s);
    system("pause");
    return 0;
}