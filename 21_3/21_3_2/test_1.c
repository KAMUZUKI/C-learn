//柔性数组
#include<stdio.h>
#include<stdlib.h>
struct S
{
    int n;
    int arr[];
};
//法2
//struct S
//{
//    int n;
//    int* arr;
//};
int main()
{
    struct S* ps = (struct S*)malloc(sizeof(struct S)+5*sizeof(int));
    ps->n = 100;
    //法2
    //struct S* ps = (struct S*)malloc(sizeof(struct S));
    //ps->arr = malloc(5 *sizeof(int));
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        ps->arr[i] = i;
    }
    struct S* ptr = (struct S*)realloc(ps,44);
    if(ptr != NULL)
    {
        ps = ptr;
    }
    for (i = 5 ; i < 10; i++)
    {
        ps->arr[i] = i; 
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d  ",ps->arr[i]);
    }
    system("pause");
    return 0;
}