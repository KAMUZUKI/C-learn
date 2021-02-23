//strcatº¯Êı

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char* my_strcat(char* dest, const char* src)
{
    char* ret = dest;
    assert(dest != NULL);
    assert(src);
    while (*dest != '\0')
    {
        dest++;
        //printf("%s\n",dest);
    }
    while (*dest++ = *src++)
    {
        ;
    }
    return ret;
}
int main()
{
    char arr1[30] = "hello";
    char arr2[] = "world";
    char* ret = my_strcat(arr1, arr2);
    printf("%s\n",ret);
    system("pause");
    return 0;
}