//��������Ϸ
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
int main()
{
    int num1 = rand() % 100 + 1;
    int num;
    while (1)
    {
        cout<<"������һ������"<<endl;
        cin>>num;
        if (num < num1)
        {
            cout<<"С��"<<endl;
        }
        else if (num == num1)
        {
            cout<<"�¶���"<<endl;
            break;
        }
        else
        {
            cout<<"����"<<endl;
        }
    }
    cout<<num1<<endl;
    system("pause");
    return 0;
} 