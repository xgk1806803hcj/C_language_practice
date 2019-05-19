#include <stdio.h>
int dt(int n)
{
    int a[41]={0,1,2};
	for (int i=3;i<=n;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	return a[n];
}

int main()
{
    int n,m;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&m);
		printf("%d\n",dt(m-1));
	}
}