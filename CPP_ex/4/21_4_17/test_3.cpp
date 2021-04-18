// 静态成员
// 静态成员就是在成员变量和成员函数前加上关键字static，称为静态成员
// 静态成员分为：
// 静态成员变量
//     所有对象共享同一份数据
//     在编译阶段分配内存
//     类内声明，类外初始化
// 静态成员函数
//     所有对象共享同一个函数
//     静态成员函数只能访问静态成员变量

#include<iostream>
#include<string>
using namespace std;
class Func
{
public:
    static void func()
    {
        cout<<"static void func函数调用"<<endl;
    }
};
class Person
{
    //静态成员变量

	//静态成员变量特点：
	//1 在编译阶段分配内存
	//2 类内声明，类外初始化
	//3 所有对象共享同一份数据
public:
    static int m_A;
private:
    static int m_B; //静态成员变量也是有访问权限的
};
int Person::m_A;
int Person::m_B;
void test01()
{
    //静态成员变量两种访问方式

	//1、通过对象
    Person p1;
    p1.m_A = 100;
    cout<<"p1.m_A = "<<p1.m_A<<endl;
    Person p2;
    p2.m_A = 200;
    cout<<"p1.m_A = "<<p1.m_A<<endl;  //共享同一份数据
    cout<<"p2.m_A = "<<p2.m_A<<endl;

    //2、通过类名
    cout<<"m_A = "<<Person::m_A<<endl;
    //cout<<"m_B = "<<Person::m_B<<endl;  //无权限访问
}
int main()
{
    Func p;
    p.func();
    Func::func();
    test01();
    system("pause");
    return 0;
}