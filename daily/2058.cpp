#include<stdio.h>
int count(int i,int j)
{
    int s;
    s=(j*j-i*i+i+j)/2;
    return s;
}
int main()
{
    int i,j,n,m,k;
    while(~scanf("%d%d",&n,&m))
    {
		if(n==0||m==0)
			break;
        i=1;j=1;

        while(i+j<=2*m&&(i<=n&&j<=n))
        {
            k=count(i,j);
            if(k==m)
            {
                printf("[%d,%d]\n",i,j);
                if(i==n&&j==n)
                    break;
                if(j<n)
				    j++;
            }
            else if(k<m&&j<n)
            {      
                    j++;
                 
            }
			else if(k>m&&i<j)
			{
				    i++;
			}
        }
		printf("\n");
    }
    return 0;
}