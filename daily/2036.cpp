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
   s+=(a[i]*b[i+1]-a[i+1]*b[i]);  //运用向量，，多边形面积在计算机中有一个很好的处理办法就是相量叉乘，我们知道三角形ABC的 面积可以等于1/2*|AB|*|AC|*sinABC，也就是等于ABXAC的模若A(x1,y1),B(x2,y2),那么S=x1*y2-x2*y1 //
     s=fabs(s);
  printf("%.1lf\n",s/2);
 }
}
