#include <stdio.h>
int main()
{
	int i,j,k,n;
	printf("ˮ�ɻ����ǣ�");
	
	n=100;   //�����for���������⣬���Ǳ��ʽ1
	loop:
	if(n<10000)   //���ʽ2 
	 {
		i=n/100;
		j=n/10%10;
		k=n%10;
		if(n==i*i*i+j*j*j+k*k*k)
		printf("%-5d",n); 
		n++;   //���ʽ3 
		goto loop;
	}
}
