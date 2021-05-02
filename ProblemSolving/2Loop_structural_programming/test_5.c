// 本题要求编写程序，根据下式求π的近似值，直到最后一项小于给定精度eps。

// 输入格式：
// 输入在一行中给出精度eps，可以使用以下语句来读输入：

// scanf("%le", &eps);
// 输出格式：
// 在一行内，按照以下格式输出π的近似值（保留小数点后5位）：

// PI = 近似值
// 输入样例：
// 1E-5
// 输出样例：
// PI = 3.14158
#define N 999999
#include<stdio.h>
double chen(int i)
{
  double result=1.0;
  int j=1;
  while(j<=i)
  {
    result=result*(2*j+1);
    j++;
  }
 return result;    
}
double fac(int m)
 {
	  double s=1.0;
	  for(int i=1;i<=m;i++) 
	  {
	   s=1.0*s*i;
	  }
	 
	  return s;
 }

int main(void)//
{
   double eps;
   double s=0;double d;

   scanf("%le",&eps);

   for(int i=0;i<=N;i++) 
   {
      d=1.0*fac(i)/chen(i);
      s=s+d;
      if(d<eps)break;	
   }
	 printf("PI = %.5lf",2.0*s);
   return 0;
 } 
