//memcpy函数模拟

#include <stdio.h>
void *my_memcpy(void *dest, const void *src, size_t count)
{
	if (NULL == dest || NULL == src || count <= 0)
		return NULL;
	while (count--)
		*(char *)dest++ = *(char *)src++;
	return dest;
}

struct S
{
    char name[20];
    int age;    
};

int main()
{
    struct S arr1[] = { {"张三", 20}, {"李四", 10} };
    struct S arr2[3] = { 0 };
    my_memcpy(arr2, arr1, sizeof(arr1));
    printf("%s\n%d",arr2[0].name,arr2[0].age); 
    getchar();
}