#include <stdio.h>

int main() {
    int n;

    // Enter a number
    printf("Enter number: ");
    scanf("%d", &n);

    // Check odd or even
    if (n & 1)
        printf("Odd\n");
    else
        printf("Even\n");

    return 0;
}
