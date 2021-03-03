#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Test(void)
{
    char* str = (char*)malloc(100);
    strcpy(str,"Hello");
    printf("%s\n",str);
    printf("%p\n",str);  
    printf("%p\n",&str);
}
int main()
{
    Test();
    system("pause");
    return 0;
    
}