#include<stdio.h>

int huzhi(__int64 n,__int64 m)
{
	
	return m==0?n:huzhi(m,n%m);
}


int main()
{
	__int64 n,m;
	while(scanf("%I64d%I64d",&n,&m)!=EOF)
	{
		if(n==-1&&m==-1)
			break;
        if(huzhi(n,m)==1)
			printf("YES\n");
		else
			printf("POOR Haha\n");
	}
	return 0;
}
