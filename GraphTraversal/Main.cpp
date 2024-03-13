#include <iostream>
#include "Queue.h"

//Breadth First Search Algorithm
void BFS(int G[][7], int start, int N)
{
    int i = start, j;
    int visited[7] = {0};

    //Print the 1st Node
    std::cout<<i<<" ";

    //Mark the first visited node as '1'
    visited[i] = 1;

    //And Enqueue it in the Queue
    Queue Q;
    Q.Enqueue(i);

    //Traversal
    while(!Q.IsEmpty())
    {
        i = Q.Dequeue();
        for(j=1;j<=N;j++)
        {
            if(G[i][j]==1 & visited[j]==0)
            {
                std::cout<<j<<" ";
                visited[j] = 1;
                Q.Enqueue(j);
            }
        }
    }
}



//Depth First Search Algorithm
void DFS(int G[][7], int start, int N)
{
    int j;

    //Visited Stack
    int visited[7] = {0};

    if(visited[start] == 0)
    {
        std::cout<<start<<" ";
        visited[start] = 1;
        for(j=1;j<=N;j++)
        {
            if(G[start][j] == 1 & visited[j] == 0)
            {
                DFS(G,j,N);
            }
        }
    }
}

int main()
{
    //Adjacency Matrix
    /*Here the vertext which have Directed Edges to an other vertex are mentioned as 1 else it's marked as 0*/
    int G[7][7] = { {0,0,0,0,0,0,0},
                    {0,0,1,1,0,0,0},
                    {0,1,0,0,1,0,0},
                    {0,1,0,0,1,0,0},
                    {0,0,1,1,0,1,1},
                    {0,0,0,0,1,0,0},
                    {0,0,0,0,1,0,0} };

BFS(G,1,7);
//DFS(G,1,7);

return 0;
}

