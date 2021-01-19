#include<stdio.h>
#include<stdlib.h>
void print1(int (*p)[5],int x,int y)
{   
    int i = 0;
    for (i = 0; i < x; i++)
    {   
        int j = 0;
        for ( j = 0; j < y; j++)
        {
           printf("%d ",(*(p + i))[j]);
        }
        printf("\n");
        
    }
}
/*
void print2(int (*p)[5],int x,int y)
{
    int m = 0;
    for (m = 0; m < x; m++)
    {
        int n = 0;
        for(n = 0; n < y;n++)
        {
            printf("%d ",p[m][n]);
            printf("%d ",*(p[m] + n));
            printf("%d ",*(*(p + m) + n));
            printf("%d ",(*(p + m))[n]);
        } 
        printf("\n");
    }
}
*/
int main()
{   
    
    int arr[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
    print1(arr,3,5);
    system("pause");
    return 0;
    
}