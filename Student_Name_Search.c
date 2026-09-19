// Student Name Search Program in C
#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, choice, position = -1;
    char names[100][50];
    char search[50];

    // Enter number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Enter student names
    printf("Enter student names:\n");

    for (i = 0; i < n; i++)
    {
        printf("Student %d: ", i + 1);
        scanf("%s", names[i]);
    }

    // Enter name to search
    printf("\nEnter name to search: ");
    scanf("%s", search);

    // Select search type
    printf("\n1. Case-sensitive search");
    printf("\n2. Case-insensitive search");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    // Case-sensitive search
    if (choice == 1)
    {
        for (i = 0; i < n; i++)
        {
            if (strcmp(names[i], search) == 0)
            {
                position = i + 1;
                break;
            }
        }
    }

    // Case-insensitive search
    else if (choice == 2)
    {
        for (i = 0; i < n; i++)
        {
            if (strcasecmp(names[i], search) == 0)
            {
                position = i + 1;
                break;
            }
        }
    }

    // Invalid choice
    else
    {
        printf("Invalid choice.\n");
        return 0;
    }

    // Display result
    if (position != -1)
    {
        printf("\nStudent found!");
        printf("\nPosition: %d\n", position);
    }
    else
    {
        printf("\nStudent not found.\n");
    }

    return 0;
}