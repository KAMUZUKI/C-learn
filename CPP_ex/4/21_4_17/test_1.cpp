// ��ʼ���б�
// ���ã�
// C++�ṩ�˳�ʼ���б��﷨��������ʼ������
// �﷨�����캯��()������1(ֵ1),����2��ֵ2��... {}
#include<iostream>
#include<string>
using namespace std;
class Person
{

public:
    Person(int a,int b,int c):m_A(a),m_B(b),m_C(c)
    {
        
    }
    void Print()
    {
        cout<<""<<m_A<<endl;
        cout<<""<<m_B<<endl;
        cout<<""<<m_C<<endl;
    }
private:
    int m_A;
    int m_B;
    int m_C;
};

int main()
{
    Person p(10,20,30);
    p.Print();
    system("pause");
    return 0;
}