#include<stdio.h>
#include<stdlib.h>
struct S
{
int a : 2;
int b : 5;
int c : 10;
int C : 30;
};
int main()
{
    struct S s = { 0 };
    printf("%d\n",sizeof(s));
    system("pause");
    return 0;
}