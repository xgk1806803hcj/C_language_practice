#include<stdio.h>
int main()
{
	int n,i;
	long long a[51];
	while(scanf("%d",&n)!=EOF)
	{
		a[1]=3;
		a[2]=6;
		a[3]=6;
		for(i=4;i<=n;i++)
			a[i]=a[i-1]+2*a[i-2];
		printf("%lld\n",a[n]);
	}
	return 0;
}
