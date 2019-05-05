#include<stdio.h>
int main()
{
	int n,i,j,k;
	long int a[1000],x,y,m;
	while(scanf("%d",&n)!=EOF&&n>1)
	{
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		x=a[0];
		y=a[1];
		for(i=0;i<n-1;i++)
		{
			if(x>y)
               k=y;
			else
				k=x;
            for(j=k;j>0;j--)
				if(x%j==0&&y%j==0)
				{ m=j;
				break;}
			if(i<n-1)
			{
			 x=x*y/m;
			}
			if(i<n-2)
			 y=a[i+2];
		}
        printf("%d\n",x); 
	}
	return 0;
}
