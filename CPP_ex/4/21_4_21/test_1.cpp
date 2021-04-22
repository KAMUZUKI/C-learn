//空指针访问成员函数
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
    p->ShowName();//空指针，可以调用成员函数
    p->ShowAge(10);//但是如果成员函数中用到了this指针，就不可以了
    
}
int main()
{
    test();
    system("pause");
    return 0;
}
