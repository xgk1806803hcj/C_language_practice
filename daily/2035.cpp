#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,i;
	long int t,s;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		s=1;
		if(a==0&&b==0)
			break;
        for(i=0;i<b;i++)
		{
			s=s*a;
            s=s%1000;
		}
		printf("%ld\n",s);
	}
	return 0;
}