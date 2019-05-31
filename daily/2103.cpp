#include<stdio.h>
int main()
{
	__int64 n,m,i,j,t,b,s;
	scanf("%I64d",&t);
	while(t--)
	{
        scanf("%I64d%I64d",&m,&n);
		j=10000;
        for(i=s=0;i<n;i++)
		{
			scanf("%I64d",&b);
			if(b==1&&i<m)
				m=0;
			else if(i>=m)
			{
                s+=j;
				j*=2;
			}
		}
		printf("%I64d RMB\n",s);
	}
	return 0;
}