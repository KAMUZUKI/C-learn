//���� -- ���õĻ����﷨
#include<iostream>
#include<string>
using namespace std;
int main()
{
    //���õĻ����﷨    
    //�������� &���� = ԭ��
    //
    int a = 10;
    int &b = a;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    b = 15;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    system("pause");
    return 0;
}
//����ע������
//int &c; //�������ñ����ʼ��
//int &c = a; //������ʼ���󣬾Ͳ����Ը���
//c = b; i//���Ǹ�ֵ���������Ǹ�������