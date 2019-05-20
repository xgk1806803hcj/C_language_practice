#include<stdio.h>
int main()
{
	int i,j,a,b,x,y,n;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d",&a,&b);
		x=0;
        y=0;
        for(i=1;i<a;i++)
			if(a%i==0)
				x+=i;
		for(j=1;j<b;j++)
			if(b%j==0)
				y+=j;
		if(a==y&&b==x)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
