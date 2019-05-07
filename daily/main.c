#include <stdio.h>
#include <stdlib.h>
struct tree
{
    int weight;
    int rchild,lchild,parent;
};
void select(struct tree* p, int n,int *s1,int *s2)
{
    int i=0, key = 0, t;
    *s1 = *s2 = 0;
    for (i = 0; i < n ; i++)
    {
        if (p[i].parent == 0 && key == 0)
        {
            key++;
            *s1 = i;
            continue;
        }
        if (p[i].parent == 0 && key == 1)
        {
            key++;
            *s2 = i;
        }
        if (key == 2 && p[i].parent == 0)
        {
            if (p[*s1].weight > p[*s2].weight)
            {
                t = *s1; *s1 = *s2; *s2 = t;
            }
            if (p[i].weight < p[*s2].weight)
                *s2 = i;
            if (p[*s1].weight > p[*s2].weight)
            {
                t = *s1; *s1 = *s2; *s2 = t;
            }
        }
    }
}
void create(struct tree *a,int n)
{
    int i=0,s1,s2;
    for (i = 0; i < n ; i++)
        scanf ("%d",&a[i].weight);
    for (i =0; i < 17; i++)
        a[i].rchild = a[i].lchild = a[i].parent = 0;
    for (i = n; i < 2 * n - 1; i++)
    {
        select (a,i,&s1,&s2);
        a[i].lchild = s1;a[i].rchild = s2;
        a[i].weight = a[s1].weight + a[s2].weight;
        a[s1].parent = a[s2].parent = i;
    }
}
int main()
{
    int n ;
    scanf("%d",&n);
    struct tree a[17];
    create(a,n);
    printf("%d",a[2 * n - 2].weight);
    return 0;
}
