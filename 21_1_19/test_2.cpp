#include<stdio.h>
#include<stdlib.h>
int main (){
    int a = 1;
    int *p = &a;
    int **pp = &p;

    printf("%p\n",&a);  //①
    printf("%p\n",p);   //②
    printf("%p\n",&p);   //③
    printf("%p",pp);
    system("pause");
    return 0;
}

