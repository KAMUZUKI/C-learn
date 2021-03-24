//³Ë·¨¿Ú¾÷±í
#include<iostream>
#include<string>
using namespace std;
int main()
{
    for (int i = 1; i < 10; i++)
    {
        //cout<<i<<endl;
        for (int j = 1; j <= i; j++)
        {
            cout<<j<<"*"<<i<<"="<<j*i<<"  ";
        }
        cout<<endl;
        
    }
    system("pause");
    return 0;
}