//"#undef"ÒÆ³ýºê

#include<stdio.h>
#include<stdlib.h>
#define MAX(X,Y) ((X)>(Y)?(X):(Y))
int main()
{ 
    int a = 10;
    int b = 11;
    printf("%d",MAX(a,b));
    //#undef MAX
    printf("%d",MAX(a,b));
    system("pause");
    return 0;
}