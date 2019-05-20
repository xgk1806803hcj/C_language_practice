#include <stdio.h>
int main (void)
{
    double a,b;
    int i,j,k,s;
    while(scanf("%lf%lf",&a,&b)!=EOF)
    {
        s=0;k=1;j=0;
        for(i=a;a>0;a-=b,j++)
        {
            if(j==k)
            j=0,k++,s++;
            s++;
        }
        printf("%d\n",s);
    }
    return 0;
}
