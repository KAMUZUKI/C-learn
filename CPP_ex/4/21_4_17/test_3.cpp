// ��̬��Ա
// ��̬��Ա�����ڳ�Ա�����ͳ�Ա����ǰ���Ϲؼ���static����Ϊ��̬��Ա
// ��̬��Ա��Ϊ��
// ��̬��Ա����
//     ���ж�����ͬһ������
//     �ڱ���׶η����ڴ�
//     ���������������ʼ��
// ��̬��Ա����
//     ���ж�����ͬһ������
//     ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

#include<iostream>
#include<string>
using namespace std;
class Func
{
public:
    static void func()
    {
        cout<<"static void func��������"<<endl;
    }
};
class Person
{
    //��̬��Ա����

	//��̬��Ա�����ص㣺
	//1 �ڱ���׶η����ڴ�
	//2 ���������������ʼ��
	//3 ���ж�����ͬһ������
public:
    static int m_A;
private:
    static int m_B; //��̬��Ա����Ҳ���з���Ȩ�޵�
};
int Person::m_A;
int Person::m_B;
void test01()
{
    //��̬��Ա�������ַ��ʷ�ʽ

	//1��ͨ������
    Person p1;
    p1.m_A = 100;
    cout<<"p1.m_A = "<<p1.m_A<<endl;
    Person p2;
    p2.m_A = 200;
    cout<<"p1.m_A = "<<p1.m_A<<endl;  //����ͬһ������
    cout<<"p2.m_A = "<<p2.m_A<<endl;

    //2��ͨ������
    cout<<"m_A = "<<Person::m_A<<endl;
    //cout<<"m_B = "<<Person::m_B<<endl;  //��Ȩ�޷���
}
int main()
{
    Func p;
    p.func();
    Func::func();
    test01();
    system("pause");
    return 0;
}