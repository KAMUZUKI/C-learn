// ���ڸ�����������N����Ҫ����� S=1!+2!+3!+...+N!��

// �����ʽ��
// ������һ���и���һ��������10��������N��

// �����ʽ��
// ��һ�������S��ֵ��

// ����������
// 3
// ���������
// 9
#include<stdio.h>
int main()
{
    int sum,num,num1;
    scanf("%d",&num);
    int i,j;
    for(i = 1;i<=num;i++)
    {
        num1 = 1;
        for(j = 1;j<=i;j++)
        {
            num1*=j;
        }
        sum += num1;
    }
    printf("%d",sum);
    return 0;
}