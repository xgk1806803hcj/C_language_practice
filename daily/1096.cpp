#include<stdio.h>
int main()
{
    int i,n,z,s,k;
	scanf("%d",&n);
	while(n--)
	{
		s=0;
		scanf("%d",&z);
		for(i=0;i<z;i++)
		{
			scanf("%d",&k);
			s+=k;
		}
		printf("%d\n",s);
		if(n!=0)
			printf("\n");
	}
	return 0;
}