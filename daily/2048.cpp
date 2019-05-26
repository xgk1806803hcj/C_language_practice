#include<stdio.h>
int main()
{
	__int64 s[21],sum;
    int i,n,m;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&m);
		s[0]=0;
		s[1]=0;
        s[2]=1;
		s[3]=2;
		sum=2;
		for(i=3;i<=m;i++)
		{
			s[i]=(i-1)*(s[i-1]+s[i-2]);
			sum=sum*i;
		}
		printf("%.2f%%\n",s[m]*100.0/sum);
	}
	return 0;
}