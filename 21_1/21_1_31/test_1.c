//strstr函数

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
char* my_strstr(const char* p1,const char* p2)
{
    assert(p1 != NULL);
    assert(p2 != NULL);
    char *s1 = NULL;
    char *s2 = NULL;
    char *cur = (char*)p1;
    if(*p2 == '\0')
    {
        return (char*)p1;
    }
    while (*cur)
    {
        s1 = cur;
        s2 = (char*)p2;
        while((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
        {
            s1++;
            s2++;
        }
        if(*s2 == '\0')
        {
            return cur;
        }
        cur++;
    }
    return NULL;
}
int main ()
{
    char *p1 = (char*)"abbbcdef";
    char *p2 = (char*)"bbc";
    char* ret = my_strstr(p1, p2);
    strstr(p1, p2);
    if (ret == NULL)
    {
        printf("子串不存在\n");
    }
    else
    {
        printf("%s\n",ret);
    }
    system("pause");
    return 0;
}