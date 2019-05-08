#include <stdio.h>
#include <stdlib.h>

int fun(int score[],int m,int below[])
{
    int i,k=0,aver=0;
    for(i=0;i<m;i++)
        if(score[i]<aver)
    {
        below[k]=score[i];
        k++;
    }
    return k;
}

int main()
{
    int a[100],i,k;
    int below[100];
    scanf("%d",&k);
    for(i=0;i<k;i++)
        scanf("%d",a[k]);
    fun(a,k,below);
    for(i=0;i<k;i++)
        printf("%d\n",a[i]);
    return 0;
}
