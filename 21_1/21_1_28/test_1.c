#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int is_left_move(char* arr1, char* arr2)
{
    int len1 = strlen(arr1);
    int len2 = strlen(arr2);
    if (len1 != len2)
    {
        return 0;       
    }
    strncat(arr1, arr1, len1);
    char* ret = strstr(arr1, arr2);
    if (ret == NULL)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    
}
int main()
{
    char arr1[30] = "abcdef";
    char arr2[] = "cdef";
    int ret = is_left_move(arr1, arr2);
    if (ret == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    system("pause");
    return 0;
}