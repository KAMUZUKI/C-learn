#include<iostream>
#include<string>
using namespace std;
//new�Ļ����﷨
int * func()
{
    //�ڶ���������������
    //new�ķ��������Ǹ��������͵�ָ��
    int *p = new int(10);
    return p;
}
void test1()
{
    int *p = func();
    cout<<*p<<endl;
    //�ͷŶ���������delete
    delete p;
    //cout<<*p<<endl;//�ڴ��ѱ��ͷţ��ٴη���Ϊ�Ƿ�����
}
//�ڶ�������������������
void test2()
{
    int* arr = new int[10]; 
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i+100;
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<endl;
    }
    //�ͷŶ�������
    //�ͷ�����ʱ��"[]"
    delete [] arr;
     
}
int main()
{
    test1();
    test2();
    system("pause");
    return 0;
}   

/*
new������
C++������new�������ڶ�����������
�������ٵ����ݣ��ɳ���Ա�ֶ����٣��ֶ��ͷţ��ͷ����ò�����delete�﷨: new��������
����new���������ݣ��᷵�ظ����ݶ�Ӧ�����͵�ָ��
*/