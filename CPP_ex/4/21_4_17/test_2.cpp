#include<iostream>
#include<string>
using namespace std;
class Phone
{
public:
    Phone(string pName)
    {
        m_PhoneName = pName;
        cout<<"phone构造函数"<<endl;
    }
    ~Phone()
    {
        cout<<"phone析构函数"<<endl;
    }
    string m_PhoneName;
};
class Person
{
public:
    Person(string name,string pName):m_name(name),m_Phone(pName)
    {
        cout<<"person构造函数"<<endl;
    }
    ~Person()
    {
        cout<<"person析构函数"<<endl;
    }
    void test()
    {
        cout<<m_name<<"使用："<<m_Phone.m_PhoneName<<endl;
    }
    string m_name;
    Phone m_Phone;
};
void test01()
{
	//当类中成员是其他类对象时，我们称该成员为 对象成员
	//构造的顺序是 ：先调用对象成员的构造，再调用本类构造
	//析构顺序与构造相反
	Person p("张三" , "HUAWEI");
	p.test();
}

int main()
{
    test01();
    system("pause");
    return 0;
}