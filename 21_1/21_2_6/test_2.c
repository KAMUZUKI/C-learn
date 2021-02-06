//结构体内存对齐
#include<stdlib.h>
#include<stdio.h>
struct S1
{
    char c1;
    int age;
    char c2;
};
struct S2
{
    char c1;
    char c2;
    int age;
};
struct S3
{
    char c1;
    char c2;
    int age;
    char c3;
    char c4;
    char c5;
    int num;
};

int main()
{
    struct S1 s1 ={ 0 };
    printf("%d\n",sizeof(s1));
    struct S2 s2 ={ 0 };
    printf("%d\n",sizeof(s2));
    struct S3 s3 ={ 0 };
    printf("%d\n",sizeof(s3));
    system("pause");
    return 0;
}