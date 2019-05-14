#include <stdio.h>
#include <stdlib.h>
#define maxint 32767
#define mvnum 100

typedef struct arcnode
{
   int adjvex;
   struct arcnode *nextarc;
}arcnode;

typedef struct vnode
{
    int data;
    arcnode *startarc;
}vnode,nodelist[mvnum];

typedef struct
{
    nodelist ast;
    int vexnum,arcnum;
}algraph;

void createudg(algraph *g)
{
    int i,k;
    scanf("%d%d",&g->vexnum,&g->arcnum);
    for(i=0;i<g->vexnum;i++)
    {
        scanf("%d",&g->ast[i].data);
        g->ast[i].startarc=NULL;
    }
    for(k=0;k<g->arcnum;k++)
    {
        arcnode *p1,*p2;
        int n1,n2;
        scanf("%d%d",&n1,&n2);
        p1=(arcnode *)malloc(sizeof(arcnode));
        p1->adjvex=n2;
        p1->nextarc=g->ast[i].startarc;g->ast[i].startarc=p1;
        p2=(arcnode *)malloc(sizeof(arcnode));
        p2->adjvex=n1;
        p2->nextarc=g->ast[i].startarc;g->ast[i].startarc=p2;
    }
}

void DFS(algraph *g,int v)
{
    int i,w;
    int a[(g->vexnum)+1];
    for(i=1;i<=g->vexnum;i++)
        a[i]=0;
    arcnode *p;
    p=g->ast[v].startarc;
    while(p!=NULL)
    {
        a[v]=1;
        w=p->adjvex;
        if(!a[w])
            DFS(g,w);
        p=p->nextarc;
    }
}

void BFS(algraph *g,int v)
{
    int i;
    int a[(g->vexnum)+1];

}


int main()
{
    algraph g;
    createudg(&g);
    DFS(&g,2);
    return 0;
}
