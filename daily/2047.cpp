#include<stdio.h>
int main()
{
	__int64 a[60];
	int i,n;
	a[1]=3;
	a[2]=8;
	for(i=3;i<40;i++)
		a[i]=a[i-1]*2+a[i-2]*2;
	while(scanf("%d",&n)!=EOF)
	{
        printf("%I64d\n",a[n]);
	}
    return 0;
}