#include<stdio.h>
int main()
{
	int i,n;
	__int64 a[51];
	while(scanf("%d",&n)!=EOF)
	{
		a[1]=1;
	    a[2]=2;
	    for(i=3;i<=50;i++)
		     a[i]=a[i-1]+a[i-2];
		printf("%I64d\n",a[n]);
	}
	return 0;
}