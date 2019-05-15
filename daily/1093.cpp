#include<stdio.h>
int main()
{
	int n,i,k,s,g;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&g);
		s=0;
	    for(i=0;i<g;i++)
		{
			scanf("%d",&k);
            s+=k;   
		}
		printf("%d\n",s);
	}
	return 0;
}