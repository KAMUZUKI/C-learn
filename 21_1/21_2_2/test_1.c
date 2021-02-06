//memcpy函数模拟

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
void* my_memcpy(void* dest,  void* src,size_t num)
{
    void* ret = dest;
    assert(dest != NULL);
    assert(src  != NULL);
    while (num--)
    {
        *(char*)dest++ = *(char*)src++;
    }
    return ret; 
}


struct S
{
    char name[20];
    int age;    
};

int main()
{
    struct S arr1[] = { {"张三", 20}, {"李四", 10}};
    struct S arr2[3] = { 0 };
    int siz = sizeof(arr1); 
    my_memcpy(arr2, arr1, siz);
    printf("%s\n%d",arr2[0].name,arr2[0].age); 
    system("pause");
    return 0;
}