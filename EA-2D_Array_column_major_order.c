//Effective Address Calculation for 2D Array in C (Column Major Order)
//EA = Base + [(Column × Number of Rows) + Row] × Size
#include <stdio.h>

int main() {
    int base, size, rows, row, col, ea;

    printf("Enter base address: ");
    scanf("%d", &base);

    printf("Enter size of element: ");
    scanf("%d", &size);

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter row index: ");
    scanf("%d", &row);

    printf("Enter column index: ");
    scanf("%d", &col);

    ea = base + ((col * rows) + row) * size;

    printf("Effective Address = %d", ea);

    return 0;
}