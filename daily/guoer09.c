#include <stdio.h>

float fun(int m,int n)
{
    float p,t=1.0;
    int i;
    for(i=1;i<=m;i++)
        t*=m;
    p=t;
    t=1.0;
    for(i=1;i<=n;i++)
        t*=n;
    p=p/t;
    t=1.0;
    for(i=1;i<=m-n;i++)
        t*=i;
    p=p/t;
    return p;
}

int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%f\n",fun(m,n));
    return 0;
}
