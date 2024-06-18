#include<iostream>
#include<limits.h>
using namespace std;
#define V 9
void print_graph(int dis[V])
{
    for(int i=0;i<V;i++)
    {
        cout<<i<<"->"<<dis[i]<<"\n";
    }
}
int min_dis(int dist[V],bool visit[V])
{
    int min=INT_MAX;
    int min_index;
    for(int i=0;i<V;i++)
    {
        if(visit[i]==false && dist[i]<=min)
        {
            min=dist[i];
            min_index=i;
        }
    }
    return min_index;
}
void dijkstra(int g[V][V],int s)
{
    int dist[V];
    bool visited[V];
     for(int v=0;v<V;v++)
     {
         dist[v]=INT_MAX;
         visited[v]=false;
     }
     dist[s]=0;
     for(int c=0;c<V;c++){
        int u=min_dis(dist,visited);
        visited[u]=true;
        for(int j=0;j<V;j++)
        {
            if(visited[j]==false && g[u][j]!=0 && (dist[u]+g[u][j])<dist[j])
            {
                dist[j]=dist[u]+g[u][j];
            }
        }
     }
    print_graph(dist);
}
int main()
{
    int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };
 
    dijkstra(graph,0);
    return 0;
}