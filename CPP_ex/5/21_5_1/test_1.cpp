// 函数调用运算符重载
// 函数调用运算符 ()  也可以重载
// 由于重载后使用的方式非常像函数的调用，因此称为仿函数
// 仿函数没有固定写法，非常灵活
#include<iostream>
#include<string>
using namespace std;
class MyPrint
{
public:
    void operator()(string text)
    {
        cout<<text<<endl;
    }
private:
};
void test01()
{
    //重载的（）操作符 也称为仿函数
    MyPrint myFunc;
    myFunc("Hello World!");
}
class MyAdd
{
public:
    int operator()(int val1,int val2)
    {
        return (val1 + val2);
    }
};
void test02()
{
    MyAdd add;
    int ret = add(10,20); 
    cout << "ret = " << ret << endl;
	//匿名对象调用  
	cout << "MyAdd()(200,100) = " << MyAdd()(200, 100) << endl;
}

int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}