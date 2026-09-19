// Binary Search implementation in C
#include <stdio.h>

int main() {
    // Sorted array
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    
    int n = 7;       // Number of elements
    int key;         // Element to search

    int low = 0;     // Starting index
    int high = n - 1; // Ending index
    int mid;         // Middle index
    int found = 0;   // 0 means not found

    // Take the element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    // Binary search
    while (low <= high) {
        
        // Find middle index
        mid = (low + high) / 2;

        // Check if element is found
        if (arr[mid] == key) {
            printf("Element found at index %d\n", mid);
            found = 1;
            break;
        }

        // Search in the right half
        else if (key > arr[mid]) {
            low = mid + 1;
        }

        // Search in the left half
        else {
            high = mid - 1;
        }
    }

    // If element was not found
    if (found == 0) {
        printf("Element not found\n");
    }

    return 0;  // End program
}