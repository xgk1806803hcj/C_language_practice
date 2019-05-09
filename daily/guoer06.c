#include <stdio.h>
#include <string.h>

void fun(char a[],char b[],int n)
{
       int i,j=0;
       for(i=0;i<strlen(a);i++)
        if(i!=n)
       {
           b[j]=a[i];
           j++;
       }
       b[j]='\0';
}

int main()
{
    char a[1000],b[1000];
    int n;
    scanf("%s %s %n",&a,&b,&n);
    fun(a,b,n);
    printf("%s\n",b);
    return 0;
}
