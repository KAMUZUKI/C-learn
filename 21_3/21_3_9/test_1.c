#include<stdio.h>
#include<string.h>
int main()
{
    //从键盘读取一行文本信息
    char buf[1024] = { 0 };
    //fgets(buf,1024,stdin);    从标准输入流读取
    //fputs(buf,stdout);       输出到标准输出流
    gets(buf);
    puts(buf);
    return 0;
}