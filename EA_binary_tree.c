// C program to calculate Effective Address in a Binary Tree
// Effective Address = Base + (Index - 1) * Word Size
#include <stdio.h>

int main() {
    int base, w, level, pos;

    // Take input from the user
    printf("Enter base, size, level, position: ");
    scanf("%d%d%d%d", &base, &w, &level, &pos);

    // Start index from 1
    int index = 1;

    // Calculate the first position of the level
    for (int i = 0; i < level; i++)
        index = index * 2;

    // Add the position within the level
    index = index + pos;

    // Calculate and display Effective Address
    printf("Effective Address = %d\n", base + (index - 1) * w);

    return 0;
}