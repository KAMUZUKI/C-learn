//srand()函数
//rand使用
#include<iostream>
#include<string>
#include<cstdlib>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main()
{
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        cout<<rand()<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    for (int i = 0; i < 10; i++)
    {
        srand(time(NULL));
        cout<<rand()<<endl;   //同一秒返回的随机值一样
    }
    system("pause");
    return 0;
}