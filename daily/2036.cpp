#include <stdio.h>
#include<math.h>
int main()
{
 int n;
 int a[100],b[100],i,j,k;
 double s;
 while(scanf("%d",&n)!=EOF&&n)
 {
  s=0;
  i=0;
  k=n;
  while(n--)
  {
   scanf("%d%d",&a[i],&b[i]);
   i++;
  }
  a[k]=a[0];
  b[k]=b[0];
  for(i=0;i<k;i++)
   s+=(a[i]*b[i+1]-a[i+1]*b[i]);  //���������������������ڼ��������һ���ܺõĴ���취����������ˣ�����֪��������ABC�� ������Ե���1/2*|AB|*|AC|*sinABC��Ҳ���ǵ���ABXAC��ģ��A(x1,y1),B(x2,y2),��ôS=x1*y2-x2*y1 //
     s=fabs(s);
  printf("%.1lf\n",s/2);
 }
}
