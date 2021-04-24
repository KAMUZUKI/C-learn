//友元
//全局函数做友元
#include<iostream>
#include<string>
using namespace std;
class Building
{
    //告诉编译器 goodGay全局函数 是 Building类的好朋友，可以访问类中的私有内容
    friend void goodGay(Building * building);
public:
    Building()
    {
        this->m_SittingRoom = "客厅";
        this->m_BedRoom = "卧室";
    }
    string m_SittingRoom;
private:
    string m_BedRoom;
};
void goodGay(Building * building)
{
    cout<<"你的好基友正在访问："<<building->m_SittingRoom<<endl;
    cout<<"你的好基友正在访问："<<building->m_BedRoom<<endl;
}
int main()
{
    Building p;
    goodGay(&p);
    system("pause");
    return 0;
}