#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int count = 0;
    printf("请输入一个数：>");
    scanf("%d",&count);
    for (int j = 0; j < 7; j++)
    {
        for (int i = 1; i < count; i++)
        {
            if ( (i>>j) & 1 == 1)
            {
                printf("%d ",i);
            }
        }
    printf("\n\n\n");
    }       
    system("pause");
    return 0;
}