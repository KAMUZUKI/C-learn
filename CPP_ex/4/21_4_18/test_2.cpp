//��Ա�����ͳ�Ա�����ֿ��洢
#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
    Person()
    {
        a = 0;
    }
    //�Ǿ�̬��Ա����ռ����ռ�
    int a;
    //��̬��Ա������ռ����ռ�
    static int b; 
	//����Ҳ��ռ����ռ䣬���к�������һ������ʵ��
    void func()
    {
        cout << "a = " << this->a << endl;
    }
	//��̬��Ա����Ҳ��ռ����ռ�
    static void func2()
    {
        cout << "b = " << b << endl;
    }
};
int Person::b = 200;
int main()
{
    Person p;
    cout<<""<<sizeof(p)<<endl;
    p.func();
    Person::func2();
    system("pause");
    return 0;
}