//枚举 enum
#include<stdio.h>
#include<stdlib.h>
enum Stu
{
    FAMALE = 10,
    MALE,
};
enum Color
{
    RED,
    GREEN,
    BLUE,
};
//union  联合体 -- 共用体   
//不能同时使用变量
union Un
{
    char c;
    int i;
};

int main()
{
    printf("%d\n",FAMALE);
    union Un u;
    printf("%d\n",sizeof(u));
    printf("%p\n",&u);
    printf("%p\n",&(u.c));
    printf("%p\n",&(u.i));
    system("pause");
    return 0;
}