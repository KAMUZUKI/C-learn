//��Ԫ
//ȫ�ֺ�������Ԫ
#include<iostream>
#include<string>
using namespace std;
class Building
{
    //���߱����� goodGayȫ�ֺ��� �� Building��ĺ����ѣ����Է������е�˽������
    friend void goodGay(Building * building);
public:
    Building()
    {
        this->m_SittingRoom = "����";
        this->m_BedRoom = "����";
    }
    string m_SittingRoom;
private:
    string m_BedRoom;
};
void goodGay(Building * building)
{
    cout<<"��ĺû������ڷ��ʣ�"<<building->m_SittingRoom<<endl;
    cout<<"��ĺû������ڷ��ʣ�"<<building->m_BedRoom<<endl;
}
int main()
{
    Building p;
    goodGay(&p);
    system("pause");
    return 0;
}