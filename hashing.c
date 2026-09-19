#include <stdio.h>

#define SIZE 10

int main()
{
    int hashTable[SIZE];
    int key, index, i;

    // Initialize hash table with -1
    for (i = 0; i < SIZE; i++)
        hashTable[i] = -1;

    // Insert 5 numbers
    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &key);

        // Calculate index using hash function
        index = key % SIZE;

        // Store key at calculated index
        hashTable[index] = key;
    }

    // Display hash table
    printf("\nHash Table:\n");

    for (i = 0; i < SIZE; i++)
    {
        printf("%d -> %d\n", i, hashTable[i]);
    }

    return 0;
}