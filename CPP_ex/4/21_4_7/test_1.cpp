//��װ
//1����װ������
//�����Ժ���Ϊ��Ϊһ�����壬�������������е�����

//��װһ��Բ�࣬��Բ���ܳ�
//class�������һ���࣬������ŵ�������
#include<iostream>
#include<string>
using namespace std;
const double PI = 3.14;
class circle
{
public://����Ȩ��  ������Ȩ��

	//����
    int M_R;
    //��Ϊ
	//��ȡ��Բ���ܳ�
    double circleZC()
    {
        //2 * pi  * r
		//��ȡԲ���ܳ�
        return 2 * PI * M_R;
    }
};
int main()
{
    //ͨ��Բ�࣬����Բ�Ķ���
	// c1����һ�������Բ
    circle c1;
    c1.M_R = 10;//��Բ����İ뾶 ���и�ֵ����

	//2 * pi * 10 = = 62.8
    cout<<"Բ���ܳ�Ϊ��"<<c1.circleZC()<<endl; 
    system("pause");
    return 0;
}