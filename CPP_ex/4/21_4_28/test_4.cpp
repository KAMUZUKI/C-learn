//��ϵ���������
//����:���ع�ϵ������������������Զ������Ͷ�����жԱȲ���
#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
    Person(string name,int age)
    {
        this->m_name = name;
        this->m_age = age;
    }
    bool operator==(Person & p)
    {
        if (this->m_name == p.m_name && this->m_age == p.m_age)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
    bool operator!=(Person &p)
    {
        if (this->m_name == p.m_name && this->m_age == p.m_age)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
private:
    string m_name;
    int m_age;
};
void test()
{
    Person a("sunwukong",18);
    Person b("sunwukong",18);
    if (a == b)
	{
		cout << "a��b���" << endl;
	}
	else
	{
		cout << "a��b�����" << endl;
	}

	if (a != b)
	{
		cout << "a��b�����" << endl;
	}
	else
	{
		cout << "a��b���" << endl;
	}
}
int main()
{
    test();
    system("pause");
    return 0;
}