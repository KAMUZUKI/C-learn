#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
struct S 
{
    int age;
    char c;
    double d;
};
int main()
{
    printf("%d\n",offsetof(struct S, age));
    printf("%d\n",offsetof(struct S, c));
    printf("%d\n",offsetof(struct S, d));
    system("pause");
    return 0;
}