// 4.6.4 �̳��й��������˳��
// ����̳и���󣬵������������Ҳ����ø���Ĺ��캯��
// ���⣺���������Ĺ��������˳����˭��˭��
#include<iostream>
#include<string>
using namespace std;
class Base
{
public:
    Base()
    {
        cout<<"Base�Ĺ��캯��!"<<endl;
    }
    ~Base()
    {
        cout<<"Base����������!"<<endl;
    }
};
class Son:public Base
{
public:
    Son()
    {
        cout<<"Son�Ĺ��캯��!"<<endl;
    }
    ~Son()
    {
        cout<<"Son����������!"<<endl;
    }
};
void test()
{
    //�̳��� �ȵ��ø��๹�캯�����ٵ������๹�캯��������˳���빹���෴
    Son son;
}
int main()
{
    test();
    system("pause");
    return 0;
}
//�ܽ᣺�̳��� �ȵ��ø��๹�캯�����ٵ������๹�캯��������˳���빹���෴