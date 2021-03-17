//使用宏定义   ofsetof

#include<stdio.h>
#include<stdlib.h>
struct S{
    char c1;
    int a;
    char c2;
};

#define OFFSETOF(struct_name,member_name) (int*)&(((struct_name*)0)->member_name)
int main()
{
    printf("%d\n",OFFSETOF(struct S,c1));
    printf("%d\n",OFFSETOF(struct S,a));
    printf("%d\n",OFFSETOF(struct S,c2));
    system("pause");
    return 0;
}