#include <stdio.h>
#include <stdlib.h>
#define len sizeof(struct student)
struct student
{
   int num;
   struct student *next;
};
struct student *creat(int a,struct student *head)
{
    int n=0;
    struct student *p1,*p2;
    p1=p2=(struct student*) malloc (len);
    scanf("%d",&p1->num);
    head=NULL;
    while(p1->num!=0&&n<=a)
    {
        n+=1;
        if(n==1)
         head=p1;
        else
         p2->next=p1;
        p2=p1;
        p1=(struct student*) malloc (len);
        scanf("%d",&p1->num);
    }
    p2->next=NULL;
   return(head);
}
void print(struct student *head)
{
    struct student *p;
    p=head;
    if(head!=NULL)
    {
        do
        {
            printf("%d ",p->num);
            p=p->next;
        }while(p!=NULL);
        printf("\n");
    }
}
struct student *fun(struct student *la,struct student *lb)
{
    struct student *p1,*p2,*p3;
    struct student *head;
    p1=la;
    p2=lb;
    if(p1->num<p2->num)
      {head=p1;p3=p1;p1=p1->next;}
    else
      {head=p2;p3=p2;p2=p2->next;}
    while(p1!=NULL&&p2!=NULL)
    if(p1->num<p2->num)
      {
         p3->next=p1;
         p1=p1->next;
         p3=p3->next;
      }
      else
      {
         p3->next=p2;
         p2=p2->next;
         p3=p3->next;
      }
     if(p1==NULL&&p2!=NULL)
     {
         p3->next=p2;
     }
     else if(p1!=NULL&&p2==NULL)
     {
         p3->next=p1;
     }
     return(head);
}
int main()
{
   struct student *la,*lb;
   la=creat(4,la);
   print(la);
   lb=creat(6,lb);
   print(lb);
   print(fun(la,lb));
   printf("\n");
}
