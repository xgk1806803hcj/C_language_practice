#include<stdio.h>

int gcd(int a,int b)
{
	if(b==0)
		return a;
	return gcd(b,a%b);
}

int main()
{
	int n;
	int a,b,i;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d",&a,&b);
        for(i=b+b;i<10000;i+=b)
		{
           if(b==gcd(a,i))
		   {
			   printf("%d\n",i);
			   break;
		   }
		}
	}
	return 0;
}