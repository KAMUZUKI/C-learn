#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
    Person()
    {
        cout<<"�޲ι��캯��"<<endl;
    }
    Person(int age)
    {
        cout<<"�вι��캯��"<<endl;
        m_age = age;
    }
    Person(const Person &p)
    {
        cout<<"�������캯��"<<endl;
        m_age= p.m_age;
    }
    //�����������ͷ��ڴ�֮ǰ����
    ~Person()
    {
        cout<<"��������"<<endl;
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