// C program to sort product prices in ascending order
#include <stdio.h>

int main() {
    int n;

    // Enter number of products
    printf("Enter number of products: ");
    scanf("%d", &n);

    // Store product prices
    float a[n];

    // Enter prices
    printf("Enter product prices:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &a[i]);
    }

    // Bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                float temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Display sorted prices
    printf("Sorted prices:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", a[i]);
    }

    printf("\n");

    return 0;
}
