//struct 结构体嵌套使用

#include<stdio.h>
#include<stdlib.h>
struct T
{
    int age;
    double weight;
};
struct S
{
    char arr[20];
    int tel;
    struct T st;
};
int main()
{
    struct S hum = { "male", 123456789, { 20, 105.6}};
    printf("%s %d %d %f",hum.arr,hum.tel,hum.st.age,hum.st.weight);
    system("pause");
    return 0;
}

/*
typedef struct Node
{
    int data;
    struct Node * next;
}Node;
int main()
{
    struct Node n1;
    Node n2;
    return 0;
}
*/