#include <stdio.h>
#include <math.h>
 int main()
 {
	 int n, m, i, j;
	 while(scanf("%d%d", &n, &m) != EOF)
	 {
		 if(n==0 && m==0)
			 break;
		 for(j=(int)sqrt((double)(2*m)); j>=1; j--)
		 {
			 i = (2*m/j+1-j) / 2;
			 if((2*i+j-1)*j/2 == m)
				 printf("[%d,%d]\n", i, i+j-1);
		 }	
		 printf("\n");
	 }		
	 return 0;
 }

