#include<stdio.h>
#include<stdlib.h>
void bubble_sort(int arr[],int sz)
{
    for (int i = 0; i < sz-1; i++)
    {
        for (int j = 0; j < sz-1-i; j++)
        {
            if (arr[j+1] < arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }            
        }
        
    }
    
}
int main ()
{
    int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
    int sz = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, sz);
    for (int i = 0; i < sz; i++)
    {
        printf("%d ",arr[i]);
    }
    system("pause");
    return 0;
}