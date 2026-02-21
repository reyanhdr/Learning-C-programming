#include <stdio.h>
#include<stdlib.h>
#define max 20

struct edge {
    int src,dest,weight;

};

int parent[max];
int rank[max];

int compare(const void* a, const void* b){
    struct edge* e1=(struct edge*)a;
    struct edge* e2=(struct edge*)b;

    return e1->weight-e2->weight;
   
    
}

int find (int i){
    if(parent[i]!=i)
    parent[i]=find(parent[i]);
    return parent[i];
}

void unionset(int x, int y){
    int rootx= find(x);
    int rooty = find(y);
    if(rank[rootx]<rank[rooty]){
        parent[rootx] = rooty;
    }
    else if(rank[rootx]>rank[rooty]){
        parent[rooty] = rootx;
    }
    else{
        parent[rooty]=rootx;
        rank[rootx]++;

    }
}

int main ()
{
    int v,e;
    printf ("Enter Number of vertices: ");
    scanf("%d",&v);

    printf ("Enter Number of edges: ");
    scanf("%d",&e);

    struct edge edges[e];
    printf("Enter edges(src,dest,weigh): \n");

for(int i=0;i<e;i++)
    {
        scanf("%d %d %d",&edges[i].src,&edges[i].dest,&edges[i].weight);
    }

    // initialize disjoint set 
    for (int i = 0; i< v ; i++){
        parent[i]=i;
        rank[i]=0;
    }

     qsort(edges,e,sizeof(edges[0]),compare);

    int mstweight= 0;

    printf("\nEdges of MST:\n");
    for(int i=0;i<e;i++)
    {
        int u=edges[i].src;
        int v=edges[i].dest;
        if(find(u)!=find(v))
        {
            printf("%d---%d==%d\n",u,v,edges[i].weight);
            mstweight+=edges[i].weight;
            unionset(u,v);
        }
    }
    printf("Total weight of MST: %d\n",mstweight);
    return 0;
}