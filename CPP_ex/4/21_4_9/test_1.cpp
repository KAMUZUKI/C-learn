//����Ȩ��
//����Ȩ��  public     ���ڿ��Է���  ������Է���
//����Ȩ��  protected  ���ڿ��Է���  ���ⲻ���Է���
//˽��Ȩ��  private    ���ڿ��Է���  ���ⲻ���Է���

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
    //Mem.m_id  //����Ȩ��������ʲ���
    //Mem.m_password   //˽��Ȩ��������ʲ���
    cout<<"Member:  "<<Mem.m_name<<endl;
    system("pause");
    return 0;
}