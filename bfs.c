// Breadth First Search (BFS) implementation in C
#include <stdio.h>

int main() {
    int n, adj[10][10];
    int visited[10] = {0};
    int queue[10];
    int front = 0, rear = 0;
    int start, i, j, v;

    // Enter number of vertices
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    // Enter adjacency matrix
    printf("Enter adjacency matrix:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &adj[i][j]);
        }
    }

    // Enter starting vertex
    printf("Enter starting vertex: ");
    scanf("%d", &start);

    // Add starting vertex to queue
    queue[rear] = start;
    rear++;

    // Mark starting vertex as visited
    visited[start] = 1;

    printf("BFS: ");

    // Continue until queue becomes empty
    while (front < rear) {

        // Remove vertex from queue
        v = queue[front];
        front++;

        // Print the vertex
        printf("%d ", v);

        // Check all adjacent vertices
        for (i = 0; i < n; i++) {

            // If vertex is connected and not visited
            if (adj[v][i] == 1 && visited[i] == 0) {

                // Add vertex to queue
                queue[rear] = i;
                rear++;

                // Mark vertex as visited
                visited[i] = 1;
            }
        }
    }

    return 0;
}