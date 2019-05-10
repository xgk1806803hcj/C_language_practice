#include <stdio.h>
#include <stdlib.h>

float fun(int n)
{
    int i;
    float s=1.0,t=1.0;
    for(i=2;i<=n;i++)
    {
        t+=i;
        s+=1.0/t;
    }
    return s;
}
int main()
{
    int n;
    scanf("%0d",&n);
    printf("%f\n",fun(n));
    return 0;
}
