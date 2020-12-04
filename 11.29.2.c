#include <stdio.h>
int main()
{
	int i,j,k,n;
	printf("水仙花数是：");
	
	n=100;   //如果是for语句做这道题，这是表达式1
	loop:
	if(n<10000)   //表达式2 
	 {
		i=n/100;
		j=n/10%10;
		k=n%10;
		if(n==i*i*i+j*j*j+k*k*k)
		printf("%-5d",n); 
		n++;   //表达式3 
		goto loop;
	}
}
