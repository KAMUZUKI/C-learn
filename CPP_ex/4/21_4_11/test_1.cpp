//�����������(Cube)
//������������������
//�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ���ȡ�

#include<iostream>
#include<string>
using namespace std;
class Cube
{
public:
    //��ȡ���
    void get_m()
    {
        int M = 2*m_len*m_wid + 2*m_len*m_hei+2*m_wid*m_hei;
        cout<< M <<endl;
    }
    //��ȡ���
    void get_t()
    {
        int T = m_len*m_wid*m_hei; 
         cout<< T <<endl;
    }
    //���س���
    int get_len()
    {
        return m_len;
    }
    void set_len(int len)
    {
        m_len = len;
    }
    //���ؿ��
    int get_wid()
    {
        return m_wid;
    }
    void set_wid(int wid)
    {
        m_wid = wid;
    }
    //���ظ߶�
    int get_hei()
    {
        return m_hei;
    }
    void set_hei(int hei)
    {
        m_hei = hei;
    }
    //��Ա����
    bool isSameByClass(Cube &c2)
    {
        if(m_len == c2.get_len() && m_wid == c2.get_wid() && m_hei == c2.get_hei())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
private:
    int m_len;
    int m_wid;
    int m_hei;
};
//ȫ�ֺ���
bool isSame(Cube &c1,Cube &c2)
{
    if(c1.get_len() == c2.get_len() && c1.get_wid() == c2.get_wid() && c1.get_hei() == c2.get_hei())
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    Cube c1;
    c1.set_len(10);
    c1.set_wid(10);
    c1.set_hei(10);
    Cube c2;
    c2.set_len(10);
    c2.set_wid(10);
    c2.set_hei(10);
    c1.get_m();
    c1.get_t();
    bool ret1 = isSame(c1,c2);
    if(ret1)
    {
        cout<<"c1��c2���"<<endl;
    }
    else
    {
        cout<<"c1��c2�����"<<endl;
    }
    bool ret2 = c1.isSameByClass(c2);
    if(ret2)
    {
        cout<<"c1��c2���"<<endl;
    }
    else
    {
        cout<<"c1��c2�����"<<endl;
    }
    system("pause");
    return 0;

}