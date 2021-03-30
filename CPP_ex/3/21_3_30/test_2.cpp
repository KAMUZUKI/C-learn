//引用 -- 引用的基本语法
#include<iostream>
#include<string>
using namespace std;
int main()
{
    //引用的基本语法    
    //数据类型 &别名 = 原名
    //
    int a = 10;
    int &b = a;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    b = 15;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    system("pause");
    return 0;
}
//引用注意事项
//int &c; //错误，引用必须初始化
//int &c = a; //—旦初始化后，就不可以更改
//c = b; i//这是赋值操作，不是更改引用