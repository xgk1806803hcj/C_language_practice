#include <stdio.h>
#include <stdlib.h>

void fun(int m,int k,int xx[])
{
    int g=0,i,j,flag=1;
    for(i=m+1;i<m*m;i++)
    {
        for(j=0;j<i;j++)
        {
            if(i%j!=0)
                flag=1;
            else
            {
                flag=0;
                break;
            }
        }
        if(flag==1&&j>=i)
        {
            if(k>=0)
            {
                xx[g++]=i;
                k--;
            }
            else
                break;
        }
    }
}

int main()
{
    int i,xx[1000],k,m;
    scanf("%d%d",&m,&k);
    fun(m,k,xx);
    for(i=0;i<1000;i++)
    printf("%d\n",xx[i]);
    return 0;
}
