//memmoveº¯ÊýÄ£Äâ

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
void* my_memmove(void* dest, const void* src, size_t count)
{
    assert( dest != NULL );
    assert( src != NULL );
    void* ret = dest;
    if (dest < src)   
    {
        while (count--)
        {
            *(char*)dest++ = *(char*)src++;
        }
        
    }
    else
    {
        while (count--)
        {
            *((char*)dest+count) =*((char*)src+count);
           dest++;
           src++;
        }
        
    }
    return ret;
}
int main()
{
    char str[] = {"abcdef"} ;
    int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int arr2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    //printf("%s\n",str);
    printf("%d",my_memmove(arr1, arr1+2, 20));
    printf("%d",my_memmove(arr2+2, arr2, 20));
    //printf("%d",my_memmove(arr, arr+2, 20));
    system("pause");
    return 0;
}