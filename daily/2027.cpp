#include<stdio.h>
#include<string.h>
int main()
{
	int a1,a2,a3,a4,a5,n,l,i,j;
	char a[100];
	scanf("%d",&n);
		getchar();	
       while(n--)
	   {
		   a1=a2=a3=a4=a5=0;
		   gets(a);
		   l=strlen(a);
		   for(j=0;j<l;j++)
		   {
			   if(a[j]=='a'||a[j]=='A')
				   a1++;
			   if(a[j]=='e'||a[j]=='E')
				   a2++;
			   if(a[j]=='i'||a[j]=='I')
				   a3++;
			   if(a[j]=='o'||a[j]=='O')
				   a4++;
			   if(a[j]=='u'||a[j]=='U')
				   a5++;
		   }
		   printf("a:%d\n",a1);
		   printf("e:%d\n",a2);
		   printf("i:%d\n",a3);
		   printf("o:%d\n",a4);
		   printf("u:%d\n",a5); 
		   if(i>0)
		   printf("\n");
	   }
    return 0;
}