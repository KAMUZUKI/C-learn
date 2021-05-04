// 4.6.4 继承中构造和析构顺序
// 子类继承父类后，当创建子类对象，也会调用父类的构造函数
// 问题：父类和子类的构造和析构顺序是谁先谁后？
#include<iostream>
#include<string>
using namespace std;
class Base
{
public:
    Base()
    {
        cout<<"Base的构造函数!"<<endl;
    }
    ~Base()
    {
        cout<<"Base的析构函数!"<<endl;
    }
};
class Son:public Base
{
public:
    Son()
    {
        cout<<"Son的构造函数!"<<endl;
    }
    ~Son()
    {
        cout<<"Son的析构函数!"<<endl;
    }
};
void test()
{
    //继承中 先调用父类构造函数，再调用子类构造函数，析构顺序与构造相反
    Son son;
}
int main()
{
    test();
    system("pause");
    return 0;
}
//总结：继承中 先调用父类构造函数，再调用子类构造函数，析构顺序与构造相反