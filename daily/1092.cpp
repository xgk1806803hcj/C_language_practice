#include<stdio.h>
int main()
{
	int s,n,i,a;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
			break;
		s=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a);
			s+=a;
		}
		printf("%d\n",s);
	}
	return 0;
}