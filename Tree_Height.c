// C program to find height of a binary tree
#include <stdio.h>
#include <stdlib.h>

// Create a node
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

// Find height of the tree
int height(struct Node *root) {

    // If tree is empty
    if (root == NULL)
        return 0;

    // Find height of left subtree
    int left = height(root->left);

    // Find height of right subtree
    int right = height(root->right);

    // Return the greater height + 1
    if (left > right)
        return left + 1;
    else
        return right + 1;
}

// Create a new node
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

    // Create child nodes
    root->left = newNode(2);
    root->right = newNode(3);

    // Create nodes under 2
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    // Display height
    printf("Height of tree = %d\n", height(root));

    return 0;
}