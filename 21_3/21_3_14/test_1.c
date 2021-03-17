//预处理指令
#include<stdio.h>
#include<stdlib.h>
#define DEBUG
int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, };
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        arr[i] = 0;
        #ifdef DEBUG
            printf("%d ",i);
        #endif 
    }
    //"#if + 常量"语句判断 
    #if 1==1
        printf("1111");
    #elif 2==2
        printf("2222");
    #else 3==3
        printf("3333");
    #endif
    system("pause");
    return 0;
}


/*
相反结果
#ifdef !DEBUG
    printf("%d ",i);
#endif 

#ifndef DEBUG
    printf("%d ",i);
#endif 
*/