#include<iostream>
#include<string>
using namespace std;
//引用做函数的返回值
//1.不要返回局部变量的引用
/*
int& test1()
{
    int a = 10;           //局部变量存放在四区中的 栈区   vscode中报错
    return a;
}
*/


//2.函数的调用可以作为左值
int& test2()
{
    static int a = 20;//静态变量，存放子啊全局区，全局区上的数据在程序结束的时候释放
    return a;
}
int main()
{
    //int& ret1 = test1();
    //cout<<"ret1 = "<<ret1<<endl;//第一次结果正确，因为编译器做了保留
    //cout<<"ret1 = "<<ret1<<endl;//第二次结果错误，因为a内存已经释放
    int &ret2 = test2(); 
    cout<<"ret2 = "<<ret2<<endl;
    test2() = 1000;               //如果函数的返回值是引用，这个函数可以作为左值
    cout<<"ret2 = "<<ret2<<endl;
    system("pause");
    return 0;
}
