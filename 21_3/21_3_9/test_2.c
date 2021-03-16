#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct S
{
    int n;
    float num;
    char arr[20];
};
int main()
{
    struct S s = { 0 };
    FILE* pf = fopen("text.txt","w");
    if (pf == NULL)
    {
        return 0;
    }
    fscanf(pf,"%d %f %s",&(s.n),&(s.num),s.arr);
    printf("%d %f %s\n",s.n,s.num,s.arr);
    fclose(pf);
    pf = NULL;
    system("pause");
    return 0;
}