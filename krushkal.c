// Kruskal's Algorithm implementation in C
#include <stdio.h>

// Store an edge
struct Edge {
    int u, v, weight;
};

int parent[10];

// Find parent of a vertex
int find(int x)
{
    if (parent[x] == x)
        return x;

    return find(parent[x]);
}

// Join two sets
void unionSet(int a, int b)
{
    parent[find(a)] = find(b);
}

int main()
{
    int n, e;
    struct Edge edges[20], temp;
    int count = 0, total = 0;

    // Enter number of vertices
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    // Enter number of edges
    printf("Enter number of edges: ");
    scanf("%d", &e);

    // Enter edges
    printf("Enter edges (u v weight):\n");

    for (int i = 0; i < e; i++)
        scanf("%d %d %d",
              &edges[i].u,
              &edges[i].v,
              &edges[i].weight);

    // Initialize parent
    for (int i = 0; i < n; i++)
        parent[i] = i;

    // Sort edges by weight
    for (int i = 0; i < e - 1; i++)
    {
        for (int j = 0; j < e - i - 1; j++)
        {
            if (edges[j].weight > edges[j + 1].weight)
            {
                temp = edges[j];
                edges[j] = edges[j + 1];
                edges[j + 1] = temp;
            }
        }
    }

    printf("\nEdges in MST:\n");

    // Select edges for MST
    for (int i = 0; i < e && count < n - 1; i++)
    {
        int u = edges[i].u;
        int v = edges[i].v;

        // Check if edge creates a cycle
        if (find(u) != find(v))
        {
            printf("%d - %d = %d\n",
                   u, v, edges[i].weight);

            total = total + edges[i].weight;
            count++;

            // Join the two vertices
            unionSet(u, v);
        }
    }

    // Display minimum cost
    printf("Minimum cost = %d\n", total);

    return 0;
}