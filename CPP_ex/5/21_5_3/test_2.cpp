// 4.6.5 �̳�ͬ����Ա����ʽ
// ���⣺�������븸�����ͬ���ĳ�Ա�����ͨ��������󣬷��ʵ����������ͬ���������أ�
// ��������ͬ����Ա   ֱ�ӷ��ʼ���
// ���ʸ���ͬ����Ա   ��Ҫ��������
#include<iostream>
#include<string>
using namespace std;
class Base
{
public:
    Base()
    {
        m_A = 100;
    }
    void func()
    {
        cout<<"Base func()��������"<<endl;
    }
    void func(int a)
    {
        cout<<"Base func(int a)��������"<<endl;
    }
public:
    int m_A;    
};
class Son:public Base
{
public:
    Son()
	{
		m_A = 200;
	}   
    //�������븸��ӵ��ͬ���ĳ�Ա��������������ظ��������а汾��ͬ����Ա����
	//�������ʸ����б����ص�ͬ����Ա��������Ҫ�Ӹ����������  
    void func()
    {
        cout<<"Son func()��������"<<endl;
    }
public:
    int m_A;
};
void test()
{
    Son s;

	cout << "Son�µ�m_A = " << s.m_A << endl;
	cout << "Base�µ�m_A = " << s.Base::m_A << endl;
	s.func();
	s.Base::func();
	s.Base::func(10);
}
int main()
{
    test();
    system("pause");
    return EXIT_SUCCESS;
}

// �ܽ᣺

// 1. ����������ֱ�ӷ��ʵ�������ͬ����Ա
// 2. ����������������Է��ʵ�����ͬ����Ա
// 3. �������븸��ӵ��ͬ���ĳ�Ա��������������ظ�����ͬ����Ա����������������Է��ʵ�������ͬ������