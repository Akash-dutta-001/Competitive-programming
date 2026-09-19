//Effective Address Calculation for 2D Array in C (Row Major Order)
//Effective Address = Base Address + [(i × Number of columns) + j] × Size of element
#include <stdio.h>

int main() {
    int base, i, j, columns, size;

    printf("Enter base address: ");
    scanf("%d", &base);

    printf("Enter number of columns: ");
    scanf("%d", &columns);

    printf("Enter row index: ");
    scanf("%d", &i);

    printf("Enter column index: ");
    scanf("%d", &j);

    size = sizeof(int);

    int address = base + ((i * columns) + j) * size;

    printf("Effective Address = %d\n", address);

    return 0;
}
