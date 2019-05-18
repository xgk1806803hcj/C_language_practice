#include<stdio.h>
int main()
{
   int n,f;
   float a,b,c;
   scanf("%d",&n);
   while(n--)
   {
	   f=0;
       scanf("%f%f%f",&a,&b,&c);
       if(a+b<=c)
		   f=1;
	   if(a+c<=b)
		   f=1;
	   if(b+c<=a)
		   f=1;
	   if(f==1)
		   printf("NO\n");
	   else
           printf("YES\n");
   }
}