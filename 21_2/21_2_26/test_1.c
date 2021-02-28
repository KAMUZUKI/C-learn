//动态内存分配
//malloc函数     free函数
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
int main()
{
    int* p = (int*)malloc(40);
    if (p == NULL)
    {
        printf("%s\n",strerror(errno));
    }
    else
    {
        int i = 0;
        for ( i = 0; i < 10; i++)
        {
            *(p + i) = i;
        }
        for ( i = 0; i < 10; i++)
        { 
            printf("%d  ",*(p + i));
        }
        
    }
    free(p);
    p = NULL;
    system("pause");
    return 0;
}