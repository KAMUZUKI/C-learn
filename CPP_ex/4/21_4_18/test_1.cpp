//��̬��Ա����
#include<iostream>
#include<string>
using  namespace std;
class Person
{
public:
    //��̬��Ա�����ص㣺
	//1 ������һ������
	//2 ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
    static void func1()
    {
        cout<<"func1����"<<endl;
        m_A = 100;
        //m_B = 100; //���󣬲����Է��ʷǾ�̬��Ա����
    }
    static int m_A;//��̬��Ա���� 
    int m_B;
private:
    //��̬��Ա����Ҳ���з���Ȩ�޵�
    static void func2()
    {
        cout<<""<<m_A<<endl;
        cout<<"func������"<<endl;
    }
};
int Person::m_A;
void test01()
{
    //��̬��Ա�������ַ��ʷ�ʽ

	//1��ͨ������
    Person p;
    p.func1();
    //2��ͨ������   
    Person::func1();

    //Person::func2(); //˽��Ȩ�޷��ʲ���
}
int main()
{
    test01();
    system("pause");
    return 0;
}