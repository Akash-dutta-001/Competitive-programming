// Adjacency Matrix representation of a graph in C
#include <stdio.h>

int main() {

    int n, i, j;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    // Create an n x n adjacency matrix
    int adj[n][n];

    // Take matrix input
    printf("Enter adjacency matrix:\n");

    // Loop through rows and columns
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &adj[i][j]);
        }
    }

    // Display the adjacency matrix
    printf("Adjacency Matrix:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", adj[i][j]);
        }
        printf("\n");  // Move to the next row
    }

    return 0;  // End the program
}