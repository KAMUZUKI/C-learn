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
    Person(int age)
    {
        cout<<"有参构造函数"<<endl;
        m_age = age;
    }
    Person(const Person &p)
    {
        cout<<"拷贝构造函数"<<endl;
        m_age= p.m_age;
    }
    //析构函数在释放内存之前调用
    ~Person()
    {
        cout<<"析构函数"<<endl;
    }
    int get_age()
    {
        return m_age;
    }
private:
    int m_age;
};
void test1()
{
    Person(10);
    Person(man);
    Person newman2 = man;
}
int main()
{
    test1();
    Person Per;
    int m_age = Per.get_age();
    cout<<m_age<<endl;
    system("pause");
    return 0;
}