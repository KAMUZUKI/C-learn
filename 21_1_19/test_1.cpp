#include<stdio.h>
#include<stdlib.h>
void test(int (*arr)[5])
{}
//一级指数传参测试
void test2(int* x)
{
    printf("%d\n",*x);
}
void test3(char* z)
{
    printf("%p\n",z);
}
void test4(char** n)
{
    printf("%p\n",n);
}
int main()  
{   
    int arr[3][5] = {0};
    test(arr);
    char ch = 'c';
    char* p = &ch;  
    const char* p2 = "abcdef";
    printf("%d\n",ch);
    printf("%d\n",p);
    printf("%s\n",p2);
    printf("\n");
    //一级指针传参测试
    int a = 10;
    int* p1 = &a;
    test2(&a);
    test2(p1);
    char cha = 'w';
    char* pc = &cha;
    test3(&cha);
    test3(pc);
    printf("\n");
    //二级指针传参测试
    char c = 'b';
    char* np = &c;
    char** nnp = &np;
    char* arra[10];
    test4(&np);
    test4(nnp);
    test4(arra);
    system("pause");
    return 0; 
}