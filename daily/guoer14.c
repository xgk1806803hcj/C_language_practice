#include <stdio.h>
#define M 6
#define N 6

int fun(int a[M][N])
{
    int i,j,s=0;
    for(j=0;j<N;j++)
    {
        s+=a[0][j];
        s+=a[M-1][j];
    }
    for(i=1;i<M-2;i++)
    {
        s+=a[i][0];
        s+=a[i][N-1];
    }
    return s;
}
int main()
{
    int m,n,i,j,s;
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    s=fun(a[m][n]);
    printf("%d\n",s);
    return 0;
}
