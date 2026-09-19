// C program to insert and delete an element from an array  
#include <stdio.h>

int main()
{
    int arr[100], n, pos, value, choice;

    // Enter number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Enter array elements
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Choose operation
    printf("\n1. Insert\n2. Delete\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    // Insert element
    if (choice == 1)
    {
        printf("Enter position: ");
        scanf("%d", &pos);

        printf("Enter element: ");
        scanf("%d", &value);

        // Shift elements to the right
        for (int i = n; i >= pos; i--)
            arr[i] = arr[i - 1];

        // Insert new element
        arr[pos - 1] = value;
        n++;
    }

    // Delete element
    else if (choice == 2)
    {
        printf("Enter position: ");
        scanf("%d", &pos);

        // Shift elements to the left
        for (int i = pos - 1; i < n - 1; i++)
            arr[i] = arr[i + 1];

        n--;
    }

    // Invalid choice
    else
    {
        printf("Invalid choice");
        return 0;
    }

    // Display updated array
    printf("Array after operation:\n");

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}