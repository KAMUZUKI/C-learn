//���ô���
#include<iostream>
#include<string>
using namespace std;
//1.ֵ����
void swap1(int a,int b)
{
    int tmp = a;
    a = b;
    b = tmp;

}
//2.��ַ����
void swap2(int *a,int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
//3.���ô���
void swap3(int &a,int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
int main()
{
    int a = 10;
    int b = 20;
    swap1(a,b);           //ֵ���ݣ��ββ�������ʵ�Σ�
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    a = 10;
    b = 20;
    swap2(&a,&b);         //��ַ���ݣ��βλ�����ʵ��
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    a = 10;
    b = 20;
    swap3(a,b);           //���ô��ݣ��βλ�����ʵ��
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    system("pause");
    return 0;
}
//�ܽ�:ͨ�����ò���������Ч��ͬ����ַ������һ���ġ����õ��﷨�������