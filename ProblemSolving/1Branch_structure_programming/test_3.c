// �й��о�����С������������ɹ����������ĳ�˴�ĳ���𣬿�ʼ�������������ɹ����������������Ժ�ĵ�N�����ǡ����㡱���ǡ�ɹ������

// �����ʽ��
// ������һ���и���һ��������1000��������N��

// �����ʽ��
// ��һ������������ڵ�N�����ǡ�Fishing�����������㡱�����ǡ�Drying��������ɹ�����������������in day N����

// ��������1��
// 103
// �������1��
// Fishing in day 103
// ��������2��
// 34
// �������2��
// Drying in day 34
#include<stdio.h>
int main()
{
    int day = 0;
    int Y = 0;
    int X = 1;
    int Z = 3;
    scanf("%d",&day);
    Y = day%5;
    if(X<=Y && Y<=Z)
    {
        printf("Fishing in day %d",day);
    }
    else
    {
        printf("Drying in day %d",day);
    }
    return 0;
}