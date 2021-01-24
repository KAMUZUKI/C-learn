#include<stdio.h>
#include<stdlib.h>
int Add (int x, int y)
{
    return x + y;
}
int main ()
{
    //指针数组
    int* arr[10];
    //数组指针
    int* (*pa)[10] = &arr; 
    //函数指针
    int (*pAdd)(int, int) = Add;
        //int sum = (*pAdd)(1,2);
        //int sum = Add(1,2);
        //printf("sum = %d",sum);
    //函数指针的数组
    int (*pArr[5])(int, int);
    //指向函数指针数组的指针
    int (*(*ppArr)[5])(int, int) = &pArr;
    system("pause");
    return 0;
}