#include<stdio.h>
int main()
{
    int i,j,n,num1,num2,z,s,k;
	scanf("%d",&n);
	while(n--)
	{
        scanf("%d%d",&num1,&num2);
		if(num2<num1)
		{
			k=num1;
			num1=num2;
			num2=k;
		}
		s=0;
        for(i=num1;i<=num2;i++)
		{
			z=0;
           for(j=1;j<i;j++)
		   {
			   if(i%j==0)
				   z+=j;
		   }
		   if(z==i)
			   s++;
		}
        printf("%d\n",s);
	}
    return 0;
}