#include <stdio.h>
#include <stdlib.h>

typedef struct treenode
{
    int key;
    struct treenode *lchild,*rchild;
}treenode;

void inserttree(treenode *t,int e)
{
    treenode *p1;
    p1=(treenode *)malloc(sizeof(treenode));
    if(!t)
    {
        t->key=e;
        t->lchild=NULL;
        t->rchild=NULL;
    }
    else if(e<t->key)
    {
        inserttree(t->lchild,e);
    }
    else if(e>t->key)
    {
        inserttree(t->rchild,e);
    }
}

void creattree(treenode *t)
{
    int e;
    while(scanf("%d",&e)!=EOF)
    {
        inserttree(&t,e);
    }
}

int main()
{
    treenode t;
    creattree(&t);
    return 0;
}
