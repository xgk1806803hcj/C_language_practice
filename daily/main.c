#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int key;
    int length;
}node;

void selectsort(node *a[])//shunxu
{
    int i,s,j;
    for(i=2;i<a[0]->length;i++)
    {
        if(a[i]->key>a[i-1]->key)
            continue;
        else
        {
            a[0]->key=a[i]->key;
            for(j=1;j<i;j++)
            {
                if(a[0]->key<a[j]->key)
                    {
                        for(s=i;s>=j;s--)
                        a[i]->key=a[i-1]->key;
                        a[j]->key=a[0]->key;
                    }
            }
        }
    }
}

void binsersort(node *a[])//zheban
{
    int i,m,j,high,low;
    for(i=2;i<a[0]->length;i++)
    {
        a[0]->key=a[i]->key;
        low=1;
        high=i-1;

        while(low<=high)
        {
            m=(low+high)/2;
            if(a[0]->key<a[m]->key)
                high=m-1;
            else
                low=m+1;
        }
        for(j=i-1;j>high+1;j--)
            a[j+1]->key=a[j]->key;
        a[high+1]->key=a[0]->key;
    }
}
/*
void shellinsert(node *a[],int dk)
{
    int i,j,s;
    for(i=dk+1;i<a[0]->length;i++)
        if(a[i]->key<a[i-dk]->key)
        {
            a[0]->key=s[i]->key;
            for(j=i-dk;j>0&&a[0]->key<a[j]->key;j-=dk)
                a[j+dk]->key=a[j]->key;
            a[j+dk]->key=a[0]->key;
        }
}
*/
int main()
{
    int i;
    node a[11];
    for(i=1;i<11;i++)
        scanf("%d%d",&a[i].key,&a[i].length);
    selectsort(&a);
    for(i=1;i<11;i++)
        printf("%d ",a[i].key);
    printf("Hello world!\n");
    return 0;
}
