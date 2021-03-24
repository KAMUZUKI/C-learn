//猜数字游戏
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
        cout<<"请输入一个数字"<<endl;
        cin>>num;
        if (num < num1)
        {
            cout<<"小了"<<endl;
        }
        else if (num == num1)
        {
            cout<<"猜对了"<<endl;
            break;
        }
        else
        {
            cout<<"大了"<<endl;
        }
    }
    cout<<num1<<endl;
    system("pause");
    return 0;
} 