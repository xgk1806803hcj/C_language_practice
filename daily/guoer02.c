#include <stdio.h>
#include <stdlib.h>

void fun(int *a,int *n)
{
    int i,j=0;
    for(i=2;i<=100;i++)
        if((i%7==0||i%11==0)&&i%77!=0)
        a[j++]=i;
    *n=j;
}

int main()
{
    int a[100],n,i;
    fun(a,n);
    for(i=0;i<100;i++)
        printf("%d\n",a[i]);
    printf("%d\n",n);
    return 0;
}
