#include<stdio.h>
int main()
{
    int n,s,i,z;
	while(scanf("%d",&n)!=EOF)
	{
		s=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&z);
            s+=z;
		}
		printf("%d\n",s);
	}
	return 0;
}