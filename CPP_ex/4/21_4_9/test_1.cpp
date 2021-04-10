//三种权限
//公共权限  public     类内可以访问  类外可以访问
//保护权限  protected  类内可以访问  类外不可以访问
//私有权限  private    类内可以访问  类外不可以访问

#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
    string m_name;
protected:
    string m_id;
private:
    int m_password;
};
int main()
{
    Person Mem;
    Mem.m_name = "MUZUKI";
    //Mem.m_id  //保护权限类外访问不到
    //Mem.m_password   //私有权限类外访问不到
    cout<<"Member:  "<<Mem.m_name<<endl;
    system("pause");
    return 0;
}