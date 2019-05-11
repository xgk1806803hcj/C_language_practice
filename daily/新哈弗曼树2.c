#include <stdio.h>
#include <stdlib.h>
#define len sizeof(node)

typedef struct node
{
    int weight;
    int parent,lchild,rchild;
}node;

void select(node *ht,int w,int *s1,int *s2)
{
    int i,j,k,s=0;
    for(i=1;i<=w&&s<1;i++)
    {
        if(ht[i].parent==0)
           {
              *s1=i;
              s++;
           }
    }
    for(;i<=w,s<2;i++)
    {
        if(ht[i].parent==0)
           {
              *s2=i;
              s++;
           }
    }
    if(ht[*s1].weight>ht[*s2].weight)
    {
        k=*s1;
        *s1=*s2;
        *s2=k;
    }
    for(j=i;j<=w;j++)
    {
        if(ht[j].parent==0)
        {
        if(ht[j].weight<ht[*s2].weight&&ht[j].weight>ht[*s1].weight)
        *s2=j;
        else if(ht[j].weight<ht[*s1].weight)
        {
            *s2=*s1;
            *s1=j;
        }
        }
    }
}

void creathufftree_1(node *ht,int n)
{
    int i,s1,s2;
    if(n==1) return;
    int m=2*n-1;
    for(i=1;i<=m;i++)
     {
         ht[i].parent=0;
         ht[i].lchild=0;
         ht[i].rchild=0;
     }
    printf("请输入n个叶子的权值\n");
    for(i=1;i<=n;i++)
         scanf("%d",&ht[i].weight);
    printf("%d\n",ht[1].weight);
    for(i=n+1;i<=m;i++)
    {
        select(&ht,i-1,&s1,&s2);
        ht[i].weight=ht[s1].weight+ht[s2].weight;
        ht[s1].parent=i;ht[s2].parent=i;
        ht[i].lchild=s1;ht[i].rchild=s2;
    }
}

void outputtree(int n,node *ht)
{
    int c,f,i,j,k;
    int b[n];
    int a[n];
    for(i=1;i<=n;i++)
    {
        k=0;
        f=ht[i].parent;
        c=i;
        while(f!=0)
        {
            if(ht[f].lchild=c)
            a[k++]=0;
            else
            a[k++]=1;
            c=f;
            f=ht[c].parent;
        }
        for(j=0;j<=k;j++)
          b[j]=a[k-j];
        printf("ht[%d]road:",i);
        for(j=0;j<=k;j++)
            printf("%d",b[j]);
        printf("\n");
    }
}
int main()
{
    int n;
    printf("请输入叶子个数\n");
    scanf("%d",&n);
    node ht[2*n];
    creathufftree_1(&ht,n);
    printf("%d\n",ht[2*n-1].weight);
    outputtree(n,&ht);
    return 0;
}
