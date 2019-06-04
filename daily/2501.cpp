#include<stdio.h>
int main()
{
	int n,t,i;
	__int64 a[35];
	a[1]=1;
	a[2]=3;
	scanf("%d",&t);
	while(t--)
	{
		for(i=3;i<=31;i++)
	    	a[i]=a[i-1]+2*a[i-2];
		scanf("%d",&n);
        printf("%I64d\n",a[n]);
	}
	return 0;
}