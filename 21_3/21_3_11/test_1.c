//Ԥ����
#include<stdio.h>
#include<stdlib.h>

//"\"������һ��
#define Print(){ \
    for (int i = 0; i < 10; i++)\
    {\
        printf("%d  ",i);\
    }\
    printf("\n");\
}

#define SQUARE(X) X * X
#define DOUBLE(X) X + X  //DOUBLE(X) (X + X)

int main()
{
    printf("%d\n",__LINE__);
    printf("%s\n",__FILE__);
    printf("%s\n",__DATE__);
    printf("%s\n",__TIME__);
    Print();
    int ret1 = SQUARE(5);
    int ret2 = SQUARE(5 + 1);
    printf("ret = %d\n",ret1);  //ret1 = 5 * 5
    //��  �滻
    printf("ret = %d\n",ret2);  //ret2 = 5 + 1*5 +1 = 11
    int ret3 = 10*DOUBLE(5);
    printf("ret = %d\n",ret3);  //ret3 = 10*5+5
    system("pause");
    return 0;
}

//�����
//1.�������#define�����п��Գ�������#define����ı��������Ƕ��ں꣬���ܳ��ֵݹ顣
//2.��Ԥ����������#define����ķ��ŵ�ʱ���ַ������������ݲ�����������