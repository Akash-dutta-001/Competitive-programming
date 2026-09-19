// C program to count internal nodes in a binary tree
#include <stdio.h>
#include <stdlib.h>

// Create a node
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

// Count internal nodes
int countInternal(struct Node *root)
{
    // If tree is empty
    if (root == NULL)
        return 0;

    // If node is a leaf
    if (root->left == NULL && root->right == NULL)
        return 0;

    // Count current node + left + right
    return 1 + countInternal(root->left)
             + countInternal(root->right);
}

// Create a new node
struct Node* newNode(int data)
{
    struct Node *node = malloc(sizeof(struct Node));

    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return node;
}

int main()
{
    // Create the binary tree
    struct Node *root = newNode(1);

    root->left = newNode(2);
    root->right = newNode(3);

    root->left->left = newNode(4);
    root->left->right = newNode(5);

    // Display number of internal nodes
    printf("Number of internal nodes = %d\n",
           countInternal(root));

    return 0;
}