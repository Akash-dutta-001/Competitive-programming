// Depth First Search (DFS) implementation in C
#include <stdio.h>

int adj[10][10];       // Adjacency matrix
int visited[10] = {0}; // Stores visited vertices
int n;                 // Number of vertices

// DFS function
void DFS(int v)
{
    printf("%d ", v);      // Print current vertex
    visited[v] = 1;        // Mark vertex as visited

    // Check all connected vertices
    for (int i = 0; i < n; i++)
    {
        if (adj[v][i] == 1 && visited[i] == 0)
        {
            DFS(i);        // Visit the connected vertex
        }
    }
}

int main()
{
    int start;

    // Enter number of vertices
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    // Enter adjacency matrix
    printf("Enter adjacency matrix:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &adj[i][j]);
        }
    }

    // Enter starting vertex
    printf("Enter starting vertex: ");
    scanf("%d", &start);

    // Perform DFS
    printf("DFS: ");
    DFS(start);

    return 0;
}