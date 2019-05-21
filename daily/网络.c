#include <stdio.h>
#include <stdlib.h>
#define maxint 32767
#define mvnum 100

typedef struct amgraph
{
    char vexs[mvnum];
    int arcs[mvnum][mvnum];
    int vexnum,arcnum;
}amgraph;

void creatamgraph(amgraph *g)
{
    int i,j,k;
    scanf("%d%d",g->vexnum,g->arcnum);
    printf("\n***************\n");
    for(i=0;i<g->vexnum;i++)
        scanf("%c",g->vexs[i]);
    printf("\n***************\n");
    for(i=0;i<g->vexnum;i++)
       for(j=0;j<g->vexnum;j++)
        g->arcs[i][j]=maxint;
    for(k=0;k<g->arcnum;k++)
    {
        scanf("%d%d",i,j);
        scanf("%d",g->arcs[i][j]);
        g->arcs[j][i]=g->arcs[i][j];
    }
    for(i=0;i<g->vexnum;i++)
       printf("%c   ",g->vexs[i]);
    printf("\n");
    for(i=0;i<g->vexnum;i++)
     {
         for(j=0;j<g->vexnum;j++)
            printf("%d  ",g->arcs[i][j]);
         printf("\n");
     }
}

int main()
{
    amgraph g;
    creatamgraph(&g);
    return 0;
}
