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
    //把格式化的数据转换成字符串存储到buf
    sprintf(buf,"%d %f %s\n",s.n,s.num,s.arr);
    //prinf（"%s\n",buf);
    //从buf中读取格式化到tmp中
    sscanf(buf,"%d %f %s\n",(&tmp.n),(&tmp.num),tmp.arr);
    printf(buf,"%d %f %s\n",tmp.n,tmp.num,tmp.arr);
    system("pause");
    return 0;
}