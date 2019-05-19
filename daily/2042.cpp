#include<stdio.h>
int main()
{
	int i,s,n,k;
	scanf("%d",&n);
	while(n--)
	{
		s=3;
		scanf("%d",&k);
        for(i=0;i<k;i++)
             s=(s-1)*2;
		printf("%d\n",s);
	}
	return 0;
}