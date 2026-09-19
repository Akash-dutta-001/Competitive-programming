// Count Leaf Nodes in a Binary Tree
#include <stdio.h>
#include <stdlib.h>

// Create a node
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

// Create a new node
struct Node* newNode(int data) {
    struct Node *node = malloc(sizeof(struct Node)); //Allocates memory for the node. (malloc)

    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return node;
}

// Count leaf nodes
int countLeaf(struct Node *root) {

    // If tree is empty
    if (root == NULL)
        return 0;

    // If node has no children, it is a leaf
    if (root->left == NULL && root->right == NULL)
        return 1;

    // Count leaves in left and right subtree
    return countLeaf(root->left) + countLeaf(root->right);
}

int main() {

    // Create the root node
    struct Node *root = newNode(1);

    // Create the tree
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    // Display number of leaf nodes
    printf("Number of leaf nodes = %d\n", countLeaf(root));

    return 0;
}