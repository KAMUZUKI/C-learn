#include<iostream>
#include<string>
using namespace std;
//�����������ķ���ֵ
//1.��Ҫ���ؾֲ�����������
/*
int& test1()
{
    int a = 10;           //�ֲ���������������е� ջ��   vscode�б���
    return a;
}
*/


//2.�����ĵ��ÿ�����Ϊ��ֵ
int& test2()
{
    static int a = 20;//��̬����������Ӱ�ȫ������ȫ�����ϵ������ڳ��������ʱ���ͷ�
    return a;
}
int main()
{
    //int& ret1 = test1();
    //cout<<"ret1 = "<<ret1<<endl;//��һ�ν����ȷ����Ϊ���������˱���
    //cout<<"ret1 = "<<ret1<<endl;//�ڶ��ν��������Ϊa�ڴ��Ѿ��ͷ�
    int &ret2 = test2(); 
    cout<<"ret2 = "<<ret2<<endl;
    test2() = 1000;               //��������ķ���ֵ�����ã��������������Ϊ��ֵ
    cout<<"ret2 = "<<ret2<<endl;
    system("pause");
    return 0;
}
