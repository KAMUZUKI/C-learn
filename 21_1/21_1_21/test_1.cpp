#include<stdio.h>
#include<stdlib.h>
int add(int x,int y)
{
    int sum;
    sum = x + y;
    return sum;
}
int main ()
{
    int (*pa)(int, int) = add; 
    printf("%d\n",pa(2,3));
    printf("%d\n",(*pa)(2,3));
    //printf("%d\n",*pa(2,3));//err   pa先与(2,3)结合， "()" 优先级比 "*" 高
    printf("%d\n",add(2,3));
    system("pause");
    return 0;
}