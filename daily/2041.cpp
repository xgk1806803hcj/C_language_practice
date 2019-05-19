#include<stdio.h>
int main()
{
	int i,j,n,m,x,y,z;
	scanf("%d",&n);
	while(n--)
	{
		    scanf("%d",&m);
		    if(m==1)
				printf("0\n");
			else if(m==2)
                printf("1\n");
			else if(m==3)
		        printf("2\n");
			else
			{
				m--;
				for(j=3,y=1,z=2;j<=m;j++)
				{
                  x=y+z;
				  y=z;
                  z=x;
				}
				printf("%d\n",x);
			}
	}
	return 0;
}