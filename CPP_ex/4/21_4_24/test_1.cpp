// ���������
// ��������ظ�������е���������½��ж��壬��������һ�ֹ��ܣ�����Ӧ��ͬ����������

// �Ӻ����������
// ���ã�ʵ�������Զ�������������ӵ�����
#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
    Person(){};
    Person(int a,int b)
    {
        this->m_A = a;
        this->m_B = b;
    }
    //��Ա����ʵ�� + �����������
    Person operator+(const Person& p) {
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}
public:
    int m_A;
    int m_B;
};

//ȫ�ֺ���ʵ�� + �����������
//Person operator+(const Person& p1, const Person& p2) {
//	Person temp(0, 0);
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}

//��������� ���Է����������� 

Person operator+(const Person& p2,int val)
{
    Person temp;
    temp.m_A = p2.m_A + val;
    temp.m_B = p2.m_B + val;
    return temp;
}
void func()
{
    Person p1(10,10);
    Person p2(10,20);
    //��Ա������ʽ
	Person p3 = p2 + p1;  //�൱�� p2.operaor+(p1)
	cout << "m_A:" << p3.m_A << " m_B:" << p3.m_B << endl;

	Person p4 = p3 + 10; //�൱�� operator+(p3,10)
	cout << "m_A:" << p4.m_A << " m_B:" << p4.m_B << endl;
}
int main()
{

    func();
    system("pause");
    return 0;
}