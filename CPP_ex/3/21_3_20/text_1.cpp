//������   �����
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i = 0;
    for (i = 1; i < 101; i++)
    {
        if ((i%7)==0 || (i%10)==7 || (i/10)==7)
        {
            cout<<"�����ӣ� "<<i<<endl;
        }
    }
    system("pause");
    return 0;
} 