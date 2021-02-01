//strcpy
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char* my_strcpy(char* dest,const char* scr)
{
    assert(dest != NULL);
    assert(scr != NULL);
    char* ret = dest;
    while (*dest++ = *scr++)
    {
        ;
    }
    return ret;
}
int main ()
{
    char arr1[] = "abcdefgi";
    //char arr2[] = "bit";
    char arr2[] = {'b','i','t','\0'};
    my_strcpy(arr1, arr2);
    printf("%s\n",arr1);
    system("pause");
    return 0;
}