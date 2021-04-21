//成员变量和成员函数分开存储
#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
    Person()
    {
        a = 0;
    }
    //非静态成员变量占对象空间
    int a;
    //静态成员变量不占对象空间
    static int b; 
	//函数也不占对象空间，所有函数共享一个函数实例
    void func()
    {
        cout << "a = " << this->a << endl;
    }
	//静态成员函数也不占对象空间
    static void func2()
    {
        cout << "b = " << b << endl;
    }
};
int Person::b = 200;
int main()
{
    Person p;
    cout<<""<<sizeof(p)<<endl;
    p.func();
    Person::func2();
    system("pause");
    return 0;
}