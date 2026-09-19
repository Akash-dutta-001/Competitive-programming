// Prim's Algorithm implementation in C
#include <stdio.h>

#define INF 999

int main() {
    int n, i, j;
    int cost[10][10];
    int visited[10] = {0};
    int edges = 0, total = 0;

    // Enter number of vertices
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    // Enter adjacency matrix
    printf("Enter cost adjacency matrix:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &cost[i][j]);

            // Change 0 to INF (no edge)
            if (cost[i][j] == 0)
                cost[i][j] = INF;
        }
    }

    // Start from vertex 0
    visited[0] = 1;

    printf("Edges in MST:\n");

    // MST needs n-1 edges
    while (edges < n - 1) {
        int min = INF;
        int u = -1, v = -1;

        // Find the minimum edge
        for (i = 0; i < n; i++) {
            if (visited[i]) {
                for (j = 0; j < n; j++) {
                    if (!visited[j] && cost[i][j] < min) {
                        min = cost[i][j];
                        u = i;
                        v = j;
                    }
                }
            }
        }

        // Print selected edge
        printf("%d - %d = %d\n", u, v, min);

        // Mark new vertex as visited
        visited[v] = 1;

        // Add edge cost
        total = total + min;

        edges++;
    }

    // Print minimum total cost
    printf("Minimum cost = %d\n", total);

    return 0;
}