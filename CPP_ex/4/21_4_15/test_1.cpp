//�����ǳ����
// ��ǳ���������Ծ������⣬Ҳ�ǳ�����һ����
// ǳ�������򵥵ĸ�ֵ��������
// ������ڶ�����������ռ䣬���п�������
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
    Person(int age,int height)
    {
        m_age  = age;
        m_height = new int(height);
        cout<<"�вι��캯��"<<endl;
    }
    Person(const Person &p1)
    {
        m_age = p1.m_age;
        m_height = new int(*p1.m_height);
        cout<<"�������캯��"<<endl;
    }
    ~Person()
    {
        cout<<"��������"<<endl;
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
    cout<<"����:"<<p1.m_age<<"   ���:"<<*p2.m_height<<endl;
    cout<<"����:"<<p2.m_age<<"   ���:"<<*p2.m_height<<endl;
}
int main()
{
    test1();
    system("pause");
    return 0;
}