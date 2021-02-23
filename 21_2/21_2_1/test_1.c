//strtokº¯ÊýÊ¹ÓÃ

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
int main()
{
    char arr[] = "192.168.1.0@qq.com";
    char* p = (char*)"@.";
    char* ret = NULL;
    for (ret = strtok(arr,p);ret != NULL;ret = strtok(NULL,p))
    {
        printf("%s\n",ret);
    }
    system("pause");
    return 0;
}