#include<stdio.h>
#include<stdlib.h>
struct ple{
    char na[15];
    int sh;
    char num[30];
};
int main (){
    struct ple g[15];
    int n;
    scanf("%d",&n);
    for(int y = 0;y < n;y++){
        scanf("%s %d %s",g[y].na,&g[y].sh,g[y].num);
    }
    for(int y = 0;y < n-1;y++){
        for(int w = y+1;w < n;w++){
            if(g[y].sh > g[w].sh){
                struct ple j = g[y];
                g[y] = g[w];
                g[w] = j;
            }
        }
    }
    for(int r = 0;r < n;r++){
        printf("%s %d %s\n",g[r].na,g[r].sh,g[r].num);
    }
    system("pause");
    return 0;
}
