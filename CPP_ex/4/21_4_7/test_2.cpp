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
        cout<<"学生姓名："<<m_name<<"      学号:"<<m_id<<endl;
    }
    
};
int main()
{
    stduent S;
    S.Student_name("张三");
    S.Student_num(157512153);
    S.ShowStudent();
    system("pause");
    return 0;
}