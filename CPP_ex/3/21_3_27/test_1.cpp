#include<iostream>
#include<string>
using namespace std;
int main()
{
    char arr[][3] = { { 'a',  '*' ,  'b' } , { 'd',  'y',  'w' } , { '*',  's' ,  'T'} };
    int i = 0;
    int j = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    system("pause");
    return 0;
}