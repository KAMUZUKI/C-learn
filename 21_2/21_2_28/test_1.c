#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//��ʽ1
void GetMemery(char **p)
{
    *p = (char*)malloc(100);
}
void test(void)
{
    char *str = NULL;
    GetMemery(&str);
    strcpy(str,"Hello World\n");
    printf(str);
    free(str);
    str = NULL;
}
int main()
{
    test();
    system("pause");
    return 0;
}

//��ʽ2
/*
char* GetMemery(char **p)
{
    p = (char*)malloc(100);
    return p;
}
void test(void)
{
    char *str = NULL;
    str = GetMemery(&str);
    strcpy(str,"Hello World\n");
    printf(str);
    free(str);
    str = NULL;
}
int main()
{
    test();
    system("pause");
    return 0;
}
*/