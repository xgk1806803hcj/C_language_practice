#include<stdio.h>
int zzxc(int a,int b)
{
	if(b!=0)
		return zzxc(b,a%b);
	else
		return a;
}
int main()
{
     int k,n,a,b,c,d,e,f;
	 scanf("%d",&n);
	 while(n--)
     {
		 scanf("%d%d%d%d",&a,&b,&c,&d);
         e=a*d+b*c;
		 f=b*d;
         k=zzxc(e,f);
		 e=e/k;
		 f=f/k;
		 printf("%d %d\n",e,f);
	 }
	 return 0;
}
