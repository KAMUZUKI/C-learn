#include<stdio.h>
#include<stdlib.h>
#define PRINT(X) printf("The value of " #X " is %d\n",X)
#define CAT(X,Y) X##Y
int main ()
{
    //"#"的使用
    int a = 10;
    int b = 20;
    PRINT(a); 
    PRINT(b); 

    //"##"的使用
    int Class84 = 2019;
    //printf( "%d\n", class84);
    printf( "%d\n",CAT(Class,84));
    //printf( "%d\n", class##84);
    //printf( "%d\n", class84);
    //"##"可以把位于它两边的符号合成一个符号。它允许宏定义从分离的文本片段创建标识符。
    system("pause");
    return 0;
}


   

