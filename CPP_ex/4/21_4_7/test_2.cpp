#include<iostream>
#include<string>
using namespace std;
class stduent
{
    public:
    string m_name;
    int m_id;
    void Student_name(string name)
    {
        m_name = name;
        
    }
    void Student_num(int id)
    {
        
        m_id = id;
    }
    void ShowStudent()
    {
        cout<<"ѧ��������"<<m_name<<"      ѧ��:"<<m_id<<endl;
    }
    
};
int main()
{
    stduent S;
    S.Student_name("����");
    S.Student_num(157512153);
    S.ShowStudent();
    system("pause");
    return 0;
}