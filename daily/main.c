#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *next;
}node;

void creatlist(struct node *a[],int b[])
{
    node *p1,*p2;
    int k=0;
    while(b[k])
    {
        p1=(node *)malloc(sizeof(node));
        p1->next=NULL;
        p2=a[b[k]%10];
        while(p2->next!=NULL)
            p2=p2->next;
        p2->next=p1;
    }
}

int main()
{
    int b[10],j=0,flag,i,k;
    node a[13];
    for(i=2;j<10;i++)
    {
        while(flag==1&&k<i)
        {
            if(i%k==0)
                flag=0;
            k++;
        }
        if(flag==1)
            b[j++]=i;
    }
    creatlist(&a[13],b[10]);
    return 0;
}
