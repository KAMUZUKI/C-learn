#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Swap(char* buf1, char* buf2, int width)
{
    for (int i = 0; i < width; i++)
    {
        char tmp = *buf1;
        *buf1 = *buf2;
        *buf2 = tmp;
        buf1++;
        buf2++;
    }
    
}
void bubble_sort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2) )
{
    for (int i = 0; i < sz-1; i++) 
    {
        for (int j = 0; j < sz-1-i; j++)
        {
            if(cmp((char*)base+j*width, (char*)base+(j+1)*width) > 0)
            {
                Swap((char*)base+j*width, (char*)base+(j+1)*width, width);
            }
        }
        
    }  
}

struct stu
{
    char name[20];
    int age;
};
int cmp_age( void*e1,  void*e2)
{
    return (((struct stu*)e1)->age - ((struct stu*)e2)->age);
}
int cmp_name( void*e1,  void*e2)
{
    return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}
void test1()
{
    struct stu s[3] = { {"zhangsan", 20}, {"lisi", 30}, {"wangwu", 10} };
    int sz = sizeof(s)/sizeof(s[0]);
    bubble_sort(s, sz, sizeof(s[0]), cmp_age);
    for (int i = 0; i < 3 ; i++)
    {
        printf("%d \n%s \n\n", s[i].age, s[i].name);
    }
    bubble_sort(s, sz, sizeof(s[0]), cmp_name);
    for (int i = 0; i < 3 ; i++)
    {
        printf("%d \n%s \n\n", s[i].age, s[i].name);
    }
}
int main()
{
    test1();
    getchar();
    return 0;
}