// �����������������
// ������������� ()  Ҳ��������
// �������غ�ʹ�õķ�ʽ�ǳ������ĵ��ã���˳�Ϊ�º���
// �º���û�й̶�д�����ǳ����
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
    //���صģ��������� Ҳ��Ϊ�º���
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
	//�����������  
	cout << "MyAdd()(200,100) = " << MyAdd()(200, 100) << endl;
}

int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}