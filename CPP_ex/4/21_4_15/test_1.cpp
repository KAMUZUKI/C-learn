//深拷贝与浅拷贝
// 深浅拷贝是面试经典问题，也是常见的一个坑
// 浅拷贝：简单的赋值拷贝操作
// 深拷贝：在堆区重新申请空间，进行拷贝操作
#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
    Person()
    {
        cout<<"无参构造函数"<<endl;
    }
    Person(int age,int height)
    {
        m_age  = age;
        m_height = new int(height);
        cout<<"有参构造函数"<<endl;
    }
    Person(const Person &p1)
    {
        m_age = p1.m_age;
        m_height = new int(*p1.m_height);
        cout<<"拷贝构造函数"<<endl;
    }
    ~Person()
    {
        cout<<"析构函数"<<endl;
        if(m_height != NULL )
        {
            delete m_height;
            m_height = NULL;
        }
    }

    int m_age;
    int *m_height;
};
void test1()
{
    Person p1(18,160);
    Person p2(p1);
    cout<<"年龄:"<<p1.m_age<<"   身高:"<<*p2.m_height<<endl;
    cout<<"年龄:"<<p2.m_age<<"   身高:"<<*p2.m_height<<endl;
}
int main()
{
    test1();
    system("pause");
    return 0;
}