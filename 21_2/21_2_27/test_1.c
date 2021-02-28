//动态内存分配
//calloc函数     
//calloc与malloc
//calloc效率较低但会初始化内存
//malloc效率较高不会初始化内存
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
int main()
{
    int* p = (int*)calloc(10,sizeof(int));
    if (p == NULL)
    {
        printf("%s",strerror(errno));
    }
    else
    {
        int i = 0;
        for ( i = 0; i < 10; i++)
        {
            printf("%d  ",*(p + i));
        }
    }
    system("pause");
    return 0;

}