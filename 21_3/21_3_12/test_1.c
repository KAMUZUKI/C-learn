#include<stdio.h>
#include<stdlib.h>
#define PRINT(X) printf("The value of " #X " is %d\n",X)
#define CAT(X,Y) X##Y
int main ()
{
    //"#"��ʹ��
    int a = 10;
    int b = 20;
    PRINT(a); 
    PRINT(b); 

    //"##"��ʹ��
    int Class84 = 2019;
    //printf( "%d\n", class84);
    printf( "%d\n",CAT(Class,84));
    //printf( "%d\n", class##84);
    //printf( "%d\n", class84);
    //"##"���԰�λ�������ߵķ��źϳ�һ�����š�������궨��ӷ�����ı�Ƭ�δ�����ʶ����
    system("pause");
    return 0;
}


   

