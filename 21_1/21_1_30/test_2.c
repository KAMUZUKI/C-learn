//strcmpº¯Êı

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int my_strcmp(const char* str1, const char* str2)
{
    assert(str1 && str2);
    while (*str1 == *str2)
    {
        if(*str1 == '\0')
            return 0;
        str1++;
        str2++;
    }
    if (*str1 > *str2)
    {
        return 1;
    }
    else 
    {
        return -1;
    }
    
}
int main ()
{
    char* str1 = (char*)"abcdef";
    char* str2 = (char*)"wksj";
    int ret = my_strcmp(str1, str2);
    printf("ret = %d\n",ret);   
    system("pause");
    return 0;
}