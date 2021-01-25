#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp_1(const void* e1, const void* e2)
{
    return (*(int*)e1 - *(int*)e2) ;
}
void test1()
{
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
    int sz = sizeof(arr)/sizeof(arr[0]);
    qsort(arr, sz, sizeof(arr[0]), cmp_1);
    for (int i = 0; i < sz; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}


int cmp_float(const void* e1, const void* e2)
{
    return ((int)(*(float*)e1 - *(float*)e2)) ;
}
void test2()
{
    float f[10] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 0.0 };
    int sz = sizeof(f)/sizeof(f[0]);
    qsort(f, sz, sizeof(f[0]), cmp_float);
    for (int j = 0; j < sz; j++)
    {
        printf("%f ",f[j]);
    }
    printf("\n");
}


struct stu
{
    char name[20];
    int age;
};
int cmp_age(const void*e1, const void*e2)
{
    return (((struct stu*)e1)->age - ((struct stu*)e2)->age);
}
void test3()    
{
    struct stu s[3] = { {"zhangsan", 20}, {"lisi", 30}, {"wangwu", 10} };
    int sz = sizeof(s)/sizeof(s[0]);
    qsort(s, sz, sizeof(s[0]), cmp_age);
    for (int k = 0; k < 3; k++)
    {
        printf("%d ",s[k].age);
    }
    printf("\n");
}


int cmp_name(const void*e1, const void*e2)
{
    return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}
void test4()    
{
    struct stu s[3] = { {"zhangsan", 20}, {"lisi", 30}, {"wangwu", 10} };
    int sz = sizeof(s)/sizeof(s[0]);
    qsort(s, sz, sizeof(s[0]), cmp_name);
    for (int k = 0; k < 3; k++)
    {
        printf("%s ",s[k].name);
    }
    printf("\n");
}

int main() 
{
    test1();
    test2();
    test3();
    test4();
    //cmp_name();
    system("pause");
    return 0;
}