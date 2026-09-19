// Adjacency List representation of a graph in C
#include <stdio.h>

int main() {
    int n, e, u, v;
    int adj[10][10] = {0};  // Adjacency matrix, initially all 0

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter number of edges: ");
    scanf("%d", &e);

    printf("Enter edges:\n");

    for (int i = 0; i < e; i++) {
        scanf("%d %d", &u, &v);

        adj[u][v] = 1;  // Connect u to v
        adj[v][u] = 1;  // Connect v to u (undirected graph)
    }

    printf("\nAdjacency List:\n");

    for (int i = 0; i < n; i++) {
        printf("%d -> ", i);  // Print vertex

        for (int j = 0; j < n; j++) {
            if (adj[i][j] == 1)
                printf("%d ", j);  // Print connected vertex
        }

        printf("\n");
    }

    return 0;
}