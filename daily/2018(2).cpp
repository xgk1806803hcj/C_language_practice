#include<stdio.h>
int main()
{
	int a[200];
	int i,n;
	a[1]=1;
	a[2]=2;
	a[3]=3;
	for(i=4;i<=55;i++)
	{
        a[i]=a[i-1]+a[i-3];
	}
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
			break;
		printf("%d\n",a[n]);
	}
	return 0;
}

