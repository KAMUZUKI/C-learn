#include<stdio.h>
#include<string.h>
int main()
{
    //�Ӽ��̶�ȡһ���ı���Ϣ
    char buf[1024] = { 0 };
    //fgets(buf,1024,stdin);    �ӱ�׼��������ȡ
    //fputs(buf,stdout);       �������׼�����
    gets(buf);
    puts(buf);
    return 0;
}