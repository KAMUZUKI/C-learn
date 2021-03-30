//引用传递
#include<iostream>
#include<string>
using namespace std;
//1.值传递
void swap1(int a,int b)
{
    int tmp = a;
    a = b;
    b = tmp;

}
//2.地址传递
void swap2(int *a,int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
//3.引用传递
void swap3(int &a,int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
int main()
{
    int a = 10;
    int b = 20;
    swap1(a,b);           //值传递，形参不会修饰实参；
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    a = 10;
    b = 20;
    swap2(&a,&b);         //地址传递，形参会修饰实参
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    a = 10;
    b = 20;
    swap3(a,b);           //引用传递，形参会修饰实参
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    system("pause");
    return 0;
}
//总结:通过引用参数产生的效果同按地址传递是一样的。引用的语法更清楚简单