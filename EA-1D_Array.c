//Effective Address Calculation for 1D Array in C
//Effective Address = Base Address + (Index × Size of Element)
#include <stdio.h>

int main() {
    int base, s, i;

    printf("Base address: , size of the element: , index: ");
    scanf("%d%d%d", &base, &s, &i);

    printf("EA = %d\n", base + i * s);

    return 0;
}
