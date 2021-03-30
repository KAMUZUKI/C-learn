#include<iostream>
#include<string>
using namespace std;
//new的基本语法
int * func()
{
    //在堆区创建整形数据
    //new的返回类型是该数据类型的指针
    int *p = new int(10);
    return p;
}
void test1()
{
    int *p = func();
    cout<<*p<<endl;
    //释放堆区数据用delete
    delete p;
    //cout<<*p<<endl;//内存已被释放，再次访问为非法操作
}
//在堆区创建整形数组数据
void test2()
{
    int* arr = new int[10]; 
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i+100;
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<endl;
    }
    //释放堆区数据
    //释放数组时加"[]"
    delete [] arr;
     
}
int main()
{
    test1();
    test2();
    system("pause");
    return 0;
}   

/*
new操作符
C++中利用new操作符在堆区开辟数据
堆区开辟的数据，由程序员手动开辟，手动释放，释放利用操作符delete语法: new数据类型
利用new创建的数据，会返回该数据对应的类型的指针
*/