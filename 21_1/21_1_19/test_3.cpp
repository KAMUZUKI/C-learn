#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[2][3]={{1,2,3},{4,5,6}};
	printf("%p\n",a);   //输出指针a数据，也就是指针a[0]的地址 
	printf("%p\n",a+1);   //输出a+1的数据 ，也就是a[1]的地址
	printf("%p\n",&a[0]);
	printf("%p\n",&a[1]);     //验证上述
	printf("%p\n",(*a)+1);  //输出的是a[0][1]的地址
	printf("%p\n",&a[0][1]);   //验证
	printf("%d\n",*(a[0]));  //输出的是a[0]a[0]的值 
 	printf("%d\n",*(*(a+1)+1));  //输出的是a[1][1]的值 
	system("pause");
}