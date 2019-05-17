#include<stdio.h>
int main()
{
    int n,m,s[20002],i,j,k,t;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        for(i=0;i<n+m;i++)
            scanf("%d",&s[i]);
        for(i=0;i<n+m;i++)
        {
            k=i;
            for(j=k+1;j<n+m;j++)
                if(s[k]>s[j])
                    k=j;
            t=s[i];
            s[i]=s[k];
            s[k]=t;
        }
        printf("%d",s[0]);
        for(i=1;i<n+m;i++)
        {
            if(s[i]!=s[i-1])    
                printf(" %d",s[i]);
        }
        printf("\n");
    }
    return 0;
}
