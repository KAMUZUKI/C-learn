// 4.6.7 ��̳��﷨
// C++����һ����̳ж����
// �﷨��` class ���� ���̳з�ʽ ����1 �� �̳з�ʽ ����2...`
// ��̳п��ܻ�������������ͬ����Ա���֣���Ҫ������������
// C++ʵ�ʿ����в������ö�̳�
#include<iostream>
#include<string>
using namespace std;
class Base1
{
public:
    Base1()
    {
        m_A = 100;
    }
public:
    int m_A;
};
class Base2
{
public:
    Base2()
    {
        m_B = 200;//��ʼ��m_B ��������⣬���Ǹ�ΪmA�ͻ���ֲ���ȷ
    }
public:
    int m_B;
};
//�﷨��class ���ࣺ�̳з�ʽ ����1 ���̳з�ʽ ����2 
class Son:public Base1,public Base2
{
public:
    Son()
    {
        m_C = 300;
        m_D = 400;
    }
public:
    int m_C;
    int m_D;
};

//��̳����ײ�����Աͬ�������
//ͨ��ʹ������������������ֵ�����һ������ĳ�Ա
void test()
{
    Son s;
    cout<< "sizeof Son = " << sizeof(s)<< endl;
    cout<<"s.Base1::m_A = "<<s.Base1::m_A<<endl;
    cout<<"s.Base2::m_B = "<<s.Base2::m_B<<endl;
    cout<<"s.Son::m_C = "<<s.Son::m_C<<endl;
}
int main()
{
    test();
    system("pause");
    return 0;
}
// �ܽ᣺ ��̳�����������г�����ͬ�����������ʹ��ʱ��Ҫ��������