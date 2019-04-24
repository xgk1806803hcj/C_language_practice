#include <stdio.h>
#include <stdlib.h>
define len sizeof(num)
struct num
{
    int a;
    struct num *next;
};
struct num *creat()
{
    struct num *head;
    struct num *p1,*p2;
    p1=p2=(struct num*)malloc(len);
    n=0;
    head=NULL;
    scanf("%d",&p1->a);
    while(p1->a>=0&&n<=3)
    {
        n+=1;
        if(n==1)
          head=p1;
        else
          p->next=p1;
        p2=p1;
        p1=(struct num*)malloc(len);
        scanf("%d",&p1->a);
    }
    return(head);
}
struct num *add(struct num *a,struct num *b)
{
    struct num *head,*p1,*p2;
    p1=a;
    p2=b;
    n=0;
    while(p1->next!=NULL&&p1->next!=NULL)
    {
        p1++;
        p2++;
    }
    while(p1->a!=0&&p2->a!=0)
    {
        n+=1;
        if(n==1)
        {if(p1->a>=p2->a)
            head=p1;
        else
            head
        }

         else if(p1->a>=p2->a)
         {

         }
    }
    return (head);
}
int main()
{
    struct num *a1,*a2,*a3;
    a1=creat();
    a2=creat();
    a3=add(a1,a2);
}
