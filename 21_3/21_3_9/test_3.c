#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct S{
    int n;
    float num;
    char arr[10];
};
int main()
{
    struct S s = { 100, 3.14, "abcdef" };
    struct S tmp =  { 0 };
    char buf[1024] = { 0 };
    //�Ѹ�ʽ��������ת�����ַ����洢��buf
    sprintf(buf,"%d %f %s\n",s.n,s.num,s.arr);
    //prinf��"%s\n",buf);
    //��buf�ж�ȡ��ʽ����tmp��
    sscanf(buf,"%d %f %s\n",(&tmp.n),(&tmp.num),tmp.arr);
    printf(buf,"%d %f %s\n",tmp.n,tmp.num,tmp.arr);
    system("pause");
    return 0;
}