//设计立方体类(Cube)
//求出立方体的面积和体积
//分别用全局函数和成员函数判断两个立方体是否相等。

#include<iostream>
#include<string>
using namespace std;
class Cube
{
public:
    //获取面积
    void get_m()
    {
        int M = 2*m_len*m_wid + 2*m_len*m_hei+2*m_wid*m_hei;
        cout<< M <<endl;
    }
    //获取体积
    void get_t()
    {
        int T = m_len*m_wid*m_hei; 
         cout<< T <<endl;
    }
    //返回长度
    int get_len()
    {
        return m_len;
    }
    void set_len(int len)
    {
        m_len = len;
    }
    //返回宽度
    int get_wid()
    {
        return m_wid;
    }
    void set_wid(int wid)
    {
        m_wid = wid;
    }
    //返回高度
    int get_hei()
    {
        return m_hei;
    }
    void set_hei(int hei)
    {
        m_hei = hei;
    }
    //成员函数
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
//全局函数
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
        cout<<"c1与c2相等"<<endl;
    }
    else
    {
        cout<<"c1与c2不相等"<<endl;
    }
    bool ret2 = c1.isSameByClass(c2);
    if(ret2)
    {
        cout<<"c1与c2相等"<<endl;
    }
    else
    {
        cout<<"c1与c2不相等"<<endl;
    }
    system("pause");
    return 0;

}