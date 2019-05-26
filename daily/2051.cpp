#include<stdio.h>
int main()
{
	int a[100];
	int n,i,j;
	while(scanf("%d",&n)!=EOF)
	{
        i=0;
		do
		{
            a[i++]=n%2;
			n/=2;
		}while(n>0);
		for(j=i-1;j>=0;j--)
			printf("%d",a[j]);
		printf("\n");
	}
    return 0;
}