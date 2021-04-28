//左移运算符重载
//作用：可以输出自定义数据类型
#include<iostream>
#include<string>
using namespace std;
class Person
{
    friend ostream& operator<<(ostream &out ,Person &p);
public:
    Person(int a,int b)
    {
        this->m_A = a;
        this->m_B = b;
    }
private:
    int m_A;
    int m_B;
};
ostream& operator<<(ostream &out,Person &p)
{
    cout<<"A: "<<p.m_A<<"   B: "<<p.m_B<<endl;
    
}
void test()
{
    Person p1(10,20);
    cout<<p1<<p1<<"Hello World"<<endl;

}
int main()
{
    test();
    system("pause");
    return 0;
}