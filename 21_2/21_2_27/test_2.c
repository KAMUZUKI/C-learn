//动态内存分配
//realloc 
//调整动态开辟内存的空间大小   
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
int main()
{
    int* p = (int*)malloc(20);
    if (p == NULL)
    {
        printf("%s\n",strerror(errno));
    }
    else
    {
        int i = 0;
        for ( i = 0; i < 5; i++)
        {
            *(p + i) = i;
        }
    }
    //就是在使用malloc开辟的20个字节空间
    //假设这里，20个自字节不能满足我们的使用了
    //希望我们能够有40个字节的空间
    //这里就可以使用realloc来调整动态开辟的内存

    //realloc函数使用注意事项：
    //1．如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
    //2．如果p指向的空间之后没有足够的内存空间可以追加，
    //则realloc函数会重新找一个新的内存区域开辟一块满足需求的空间，
    //并且把原来内存中的数据拷贝回来，释放旧的内存空间,最后返回新开辟的内存空间地址
    //
    int* ptr = (int*)realloc(p,40);
    if (ptr != NULL)
    {
        p = ptr;
        int i = 0;
        for ( i = 5; i < 10; i++)
        {
            *(p + i) = i;
        }
        for ( i = 0; i < 10; i++)
        { 
            printf("%d  ",*(p + i));
        }
    }
    else
    {
        printf("开辟空间失败");
    }
    free(p);
    p = NULL;
    

    system("pause");
    return 0;
}