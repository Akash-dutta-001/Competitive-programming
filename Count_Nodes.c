// C program to count nodes in a binary tree
#include <stdio.h>
#include <stdlib.h>

// Create a node
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

// Function to count nodes
int countNodes(struct Node *root) {
    // If tree is empty
    if (root == NULL)
        return 0;

    // Count current node + left nodes + right nodes
    return 1 + countNodes(root->left) + countNodes(root->right);
}

// Function to create a new node
struct Node* newNode(int data) {
    struct Node *node = malloc(sizeof(struct Node));

    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return node;
}

int main() {
    // Create root node
    struct Node *root = newNode(1);

    // Create other nodes
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    // Display total number of nodes
    printf("Number of nodes = %d\n", countNodes(root));

    return 0;
}