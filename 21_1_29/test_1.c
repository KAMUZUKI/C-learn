//strlenº¯Êı

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
int my_strlen(const char* str)
{
    int count = 0;
    assert(str != NULL);
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}
int main()
{
    int len1 = my_strlen("abcdef");
    printf("%d\n",len1);
    printf("%d\n",strlen("abcdef"));
    system("pause");
    return 0;
}