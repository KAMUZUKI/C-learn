// ����Ҫ���д���򣬸�����ʽ��еĽ���ֵ��ֱ�����һ��С�ڸ�������eps��

// �����ʽ��
// ������һ���и�������eps������ʹ����������������룺

// scanf("%le", &eps);
// �����ʽ��
// ��һ���ڣ��������¸�ʽ����еĽ���ֵ������С�����5λ����

// PI = ����ֵ
// ����������
// 1E-5
// ���������
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
