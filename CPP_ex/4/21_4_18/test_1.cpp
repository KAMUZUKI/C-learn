//静态成员函数
#include<iostream>
#include<string>
using  namespace std;
class Person
{
public:
    //静态成员函数特点：
	//1 程序共享一个函数
	//2 静态成员函数只能访问静态成员变量
    static void func1()
    {
        cout<<"func1函数"<<endl;
        m_A = 100;
        //m_B = 100; //错误，不可以访问非静态成员变量
    }
    static int m_A;//静态成员变量 
    int m_B;
private:
    //静态成员函数也是有访问权限的
    static void func2()
    {
        cout<<""<<m_A<<endl;
        cout<<"func函数："<<endl;
    }
};
int Person::m_A;
void test01()
{
    //静态成员变量两种访问方式

	//1、通过对象
    Person p;
    p.func1();
    //2、通过类名   
    Person::func1();

    //Person::func2(); //私有权限访问不到
}
int main()
{
    test01();
    system("pause");
    return 0;
}