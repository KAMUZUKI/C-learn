//成员属性设置为私有
#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
    string P_name;
    string get_name()
    {
        return P_name;
    }
    void set_name(string name)
    {
        P_name = name;
    }
    
    int P_age;
    int get_age()
    {
        return P_age;
    }
    void set_age(int age)
    {
        if (age > 0 || age < 150)
        {
            P_age = age;
        }
        else
        {
            cout<<"it a mistake number"<<endl;
        }
    } 
    

    string P_lover;
    string get_lover()
    {
        return P_lover;
    }
    void set_lover(string lover)
    {
        P_lover = lover;
    }
private:
	string m_Name; //可读可写  姓名
	
	int m_Age; //只读  年龄

	string m_Lover; //只写  情人
};

int main()
{
    Person Per;
    int age;
    string lover;
    string name;
    cout<<"plaese input your name"<<endl;
    cin>>name;
    Per.set_name(name);
    cout<<"please input a number for your age"<<endl;
    cin>>age;
    Per.set_age(age);
    cout<<"plaese input your lover name"<<endl;
    cin>>lover;
    Per.set_lover(lover);
    cout<<Per.get_name()<<endl;
    cout<<Per.get_age()<<endl;
    cout<<Per.get_lover()<<endl;
    system("pause");
    return 0;
}