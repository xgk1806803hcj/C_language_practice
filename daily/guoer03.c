#include <stdio.h>
#include <stdlib.h>

void fun(int x,int pp[],int *n)
{
    int i=1,j=0,k=0,*t=pp;
    for(i=0;i<=x;i++)
        if(i%2!=0)
    {
        t[j]=i;
        j++;
    }
    for(i=0;i<j;i++)
        if(x%t[i]==0)
    {
        pp[k]=t[i];
        k++;
    }
    *n=k;
}

int main()
{
    int i,pp[100],n;
    for(i=0;i<100;i++)
        printf("%d\n",pp[i]);
    printf("%d\n",n);
    return 0;
}
