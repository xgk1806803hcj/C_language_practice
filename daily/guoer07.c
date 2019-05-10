#include <stdio.h>
#include <stdlib.h>

void fun(int *s,int t,int *k)
{
    int i,max;
    *k=0;
    max=s[0];
    for(i=0;i<t;i++)
      if(s[i]>max)
      {
          max=s[i];
          *k=i;
      }
}

int main()
{
    int f,i,t,*k;
    scanf("%d",&t);
    int s[t];
    for(i=0;i<t;i++)
        scanf("%d",&s[i]);
    fun(s,t,&k);
    printf("%d\n",k);
    return 0;
}
