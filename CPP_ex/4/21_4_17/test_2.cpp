#include<iostream>
#include<string>
using namespace std;
class Phone
{
public:
    Phone(string pName)
    {
        m_PhoneName = pName;
        cout<<"phone���캯��"<<endl;
    }
    ~Phone()
    {
        cout<<"phone��������"<<endl;
    }
    string m_PhoneName;
};
class Person
{
public:
    Person(string name,string pName):m_name(name),m_Phone(pName)
    {
        cout<<"person���캯��"<<endl;
    }
    ~Person()
    {
        cout<<"person��������"<<endl;
    }
    void test()
    {
        cout<<m_name<<"ʹ�ã�"<<m_Phone.m_PhoneName<<endl;
    }
    string m_name;
    Phone m_Phone;
};
void test01()
{
	//�����г�Ա�����������ʱ�����ǳƸó�ԱΪ �����Ա
	//�����˳���� ���ȵ��ö����Ա�Ĺ��죬�ٵ��ñ��๹��
	//����˳���빹���෴
	Person p("����" , "HUAWEI");
	p.test();
}

int main()
{
    test01();
    system("pause");
    return 0;
}