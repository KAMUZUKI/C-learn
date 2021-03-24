#include<iostream>
#include<string>
#include<unistd.h>
#include<time.h>
#include<windows.h>
#include<stdlib.h>
using namespace std;
int main()
{
    
    for (int i = 0; i < 10; i++)
    {
        cout<<time(NULL)<<endl;
        Sleep(1000);
    }
    
    system("pause");    
    return 0;
}