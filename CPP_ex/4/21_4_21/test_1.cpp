//��ָ����ʳ�Ա����
#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
    void ShowName()
    {
        cout<<"ShowName"<<endl;
    }
    void ShowAge(int age)
    {
        if(this == NULL)
        {
            return;
        }
        this->age = age;
        cout<<"ShowAge"<<this->age<<endl;
    }
private:
    int age;
};
void test()
{
    Person *p = NULL;
    p->ShowName();//��ָ�룬���Ե��ó�Ա����
    p->ShowAge(10);//���������Ա�������õ���thisָ�룬�Ͳ�������
    
}
int main()
{
    test();
    system("pause");
    return 0;
}
