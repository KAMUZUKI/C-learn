//函数占位参数  
#include<iostream>
#include<string>
using namespace std;
//占位参数
//返回值类型函数名（数据类型）l}
//目前阶段的占位参数我们还用不到，后面课程中会用到
void func (int a , int)
{
cout <<"this is func"<< endl;
}
int main()
{
    cout<<(10,10)<<endl;
    system("pause");
    return 0; 
}