#include<stdio.h>
#include<stdlib.h>
int Add (int x, int y)
{
    return x + y;
}
int main ()
{
    //ָ������
    int* arr[10];
    //����ָ��
    int* (*pa)[10] = &arr; 
    //����ָ��
    int (*pAdd)(int, int) = Add;
        //int sum = (*pAdd)(1,2);
        //int sum = Add(1,2);
        //printf("sum = %d",sum);
    //����ָ�������
    int (*pArr[5])(int, int);
    //ָ����ָ�������ָ��
    int (*(*ppArr)[5])(int, int) = &pArr;
    system("pause");
    return 0;
}