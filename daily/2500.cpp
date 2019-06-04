#include<stdio.h>
int main()
{
	int n,m,i,j;
	scanf("%d",&n);
	while(n--)
	{
        scanf("%d",&m);
		for(j=0;j<3*m;j++)
		{
			for(i=0;i<m;i++)
				printf("HDU");
			printf("\n");
		}
	}
	return 0;
}
