#include <stdio.h>

#define INF 99999   // Represents infinity

// Structure for an edge
struct Edge {
    int src, dest, weight;
};

// Bellman-Ford function
void bellmanFord(struct Edge edges[], int V, int E, int source) {

    int dist[V];

    // Initialize all distances to infinity
    for (int i = 0; i < V; i++)
        dist[i] = INF;

    // Distance from source to itself is 0
    dist[source] = 0;

    // Relax all edges V-1 times
    for (int i = 1; i <= V - 1; i++) {

        for (int j = 0; j < E; j++) {

            int u = edges[j].src;
            int v = edges[j].dest;
            int w = edges[j].weight;

            // Update distance if shorter path is found
            if (dist[u] != INF && dist[u] + w < dist[v])
                dist[v] = dist[u] + w;
        }
    }

    // Check for negative weight cycle
    for (int j = 0; j < E; j++) {

        int u = edges[j].src;
        int v = edges[j].dest;
        int w = edges[j].weight;

        if (dist[u] != INF && dist[u] + w < dist[v]) {
            printf("Negative weight cycle exists!\n");
            return;
        }
    }

    // Display shortest distances
    printf("\nVertex\tDistance\n");

    for (int i = 0; i < V; i++)
        printf("%d\t%d\n", i, dist[i]);
}

int main() {

    int V, E, source;

    // Input vertices and edges
    printf("Enter number of vertices: ");
    scanf("%d", &V);

    printf("Enter number of edges: ");
    scanf("%d", &E);

    // Create edge array
    struct Edge edges[E];

    // Input edge details
    printf("Enter source, destination and weight:\n");

    for (int i = 0; i < E; i++) {
        scanf("%d %d %d",
              &edges[i].src,
              &edges[i].dest,
              &edges[i].weight);
    }

    // Input source vertex
    printf("Enter source vertex: ");
    scanf("%d", &source);

    // Call Bellman-Ford
    bellmanFord(edges, V, E, source);

    return 0;
}