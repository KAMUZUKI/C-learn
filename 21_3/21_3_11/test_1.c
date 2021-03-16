//预处理
#include<stdio.h>
#include<stdlib.h>

//"\"连接下一行
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
    //宏  替换
    printf("ret = %d\n",ret2);  //ret2 = 5 + 1*5 +1 = 11
    int ret3 = 10*DOUBLE(5);
    printf("ret = %d\n",ret3);  //ret3 = 10*5+5
    system("pause");
    return 0;
}

//定义宏
//1.宏参数和#define定义中可以出现其他#define定义的变量。但是对于宏，不能出现递归。
//2.当预处理器搜索#define定义的符号的时候，字符串常量的内容并不被搜索。