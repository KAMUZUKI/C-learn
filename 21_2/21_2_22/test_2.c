#include<stdio.h>
#include<stdlib.h>
//int check_sys()
//{
//    int a = 1;
//    return *(char*)&a;
//}
int check_sys()
{
    union Un
    {
        char c;
        int i;
    }u;
    u.i = 1;
    return u.c; 
}
int main()
{
    int a = 1;
    int ret = check_sys();
    if (1 == ret)
    {
        printf("Ð¡¶Ë\n");
    }
    else
    {
        printf("´ó¶Ë\n");
    }
    system("pause");
    return 0;
}