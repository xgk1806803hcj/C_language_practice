#include <stdio.h>
int main()
{
    __int64 n;
    __int64 a[125];
    a[1]=3;
    a[2]=6;
    a[3]=6;
    for (int i=4;i<=65;i++)
    {
        a[i]=a[i-1]+a[i-2]*2;
    }
    while (scanf ("%d",&n)!=EOF)
    {
        printf ("%I64d\n",a[n]);
    }
    return 0;
}
