#include<stdio.h>
#define mvnum 100

typedef struct arcnode//表节点
{
    int adjvex;
    struct arcnode *nextarc;
}arcnode;

typedef struct vnode//顶点
{
    int data;
    arcnode *firstarc;
}vnode,adjlist[mvnum];

typedef struct
{
    adjlist vertices;
    int vexnum,arcnum;
}algraph;

void creatalgraph(algraph *g)
{
    arcnode *p1,*p2;
    int i,k,v1,v2,a,b;
    scanf("%d%d",&g->vexnum,&g->arcnum);
    for(i=0;i<g->vexnum;i++)
    {
        scanf("%d",&g->vertices[i].data);
        g->vertices[i].firstarc=NULL;
    }
    for(k=0;k<g->arcnum;k++)
    {
        scanf("%d%d",&v1,&v2);
        for(i=0;i<g->vexnum;i++)
            if(v1==g->vertices[i].data)
            a=i;
        for(i=0;i<g->vexnum;i++)
            if(v2==g->vertices[i].data)
            b=i;
        p1=(arcnode *)malloc(sizeof(arcnode));
        p1->adjvex=b;
        p1->nextarc=g->vertices[a].firstarc;
        g->vertices[a].firstarc=p1;
        p2=(arcnode *)malloc(sizeof(arcnode));
        p2->adjvex=a;
        p2->nextarc=g->vertices[b].firstarc;
        g->vertices[b].firstarc=p2;
    }
}

int main()
{
     algraph g;
     creatalgraph(&g);
     return 0;
}
