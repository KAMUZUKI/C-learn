#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
//����������Ԫ�صĵ�ַ
//1. sizeof(������)�C��������ʾ��������
//2��&�������C��������ʾ��������
//��ά����
int a[] = { 1, 2, 3, 4 };
printf( "%d\n", sizeof(a));
printf( "%d\n", sizeof(*a));
printf( "%d\n", sizeof(a + 1));
printf( "%d\n", sizeof(a[1]));
printf( "%d\n", sizeof(&a));
printf( "%d\n", sizeof(*&a) );
printf( "%d\n", sizeof(&a + 1));
printf( "%d\n", sizeof(&a[0]));
printf( "%d\n", sizeof(&a[0] + 1));
//�ַ�����
printf("\n\n\n");
char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f'};
printf("%d\n", sizeof(arr));
printf("%d\n", sizeof(arr + 0));
printf("%d\n", sizeof(*arr));
printf("%d\n", sizeof( arr[1]));
printf("%d\n", sizeof(&arr));
printf("%d\n", sizeof(&arr + 1));
printf("%d\n", sizeof(&arr[0] +1));
printf("\n\n\n");
char parr[] = { 'a', 'b', 'c', 'd', 'e', 'f'};
printf( "%d\n", strlen(parr));  
printf( "%d\n", strlen(parr + 0));
//printf( "%d\n", strlen(*arr));  err
//printf( "%d\n", strlen( arr[1]));  err
//printf( "%d\n", strlen(&parr));
//printf( "%d\n", strlen(&parr + 1));
printf( "%d\n", strlen(&parr[0] +1));
system("pause");
return 0;
}