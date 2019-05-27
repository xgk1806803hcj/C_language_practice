#include<stdio.h>
#include<stdlib.h>
#define MAXN 1002
struct node
{
	int w,s;
	int sum;
}a[MAXN];
int cmp(const void*a,const void*b)
{
    return *(int*)a-*(int*)b;
}
int main()
{
	int i,n;
	__int64 l,k,pdv[10002];
	while(scanf("%d",&n)!=EOF)
	{
       for(i=0;i<n;i++)
	   {
		   scanf("%d%d",&a[i].w,&a[i].s);
           a[i].sum=a[i].w+a[i].s;
	   }
       qsort(a,n,sizeof(a[0]),cmp);
	   k=a[0].w;
       for(i=1;i<n;i++)
	   {
		   pdv[i]=k-a[i].s;
		   k+=a[i].w;
	   }
	   l=pdv[1];
	   for(i=2;i<n;i++)
		   if(pdv[i]>l)
			   l=pdv[i];
       printf("%I64d\n",l);	   
	}
	return 0;
}