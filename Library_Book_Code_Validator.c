// Library Book Code Validator
#include <stdio.h>
#include <string.h>

int main() {
    char code[20];
    int valid = 1;
    int i;

    // Take book code from user
    printf("Enter book code: ");
    scanf("%s", code);

    // Check length is exactly 12
    if (strlen(code) != 12) {
        valid = 0;
    }

    // Check first 3 characters are uppercase letters
    for (i = 0; i < 3 && valid; i++) {
        if (code[i] < 'A' || code[i] > 'Z') {
            valid = 0;
        }
    }

    // Check first hyphen
    if (valid && code[3] != '-') {
        valid = 0;
    }

    // Check next 4 characters are digits
    for (i = 4; i < 8 && valid; i++) {
        if (code[i] < '0' || code[i] > '9') {
            valid = 0;
        }
    }

    // Check second hyphen
    if (valid && code[8] != '-') {
        valid = 0;
    }

    // Check last 3 characters are digits
    for (i = 9; i < 12 && valid; i++) {
        if (code[i] < '0' || code[i] > '9') {
            valid = 0;
        }
    }

    // Display result
    if (valid)
        printf("Valid book code\n");
    else
        printf("Invalid book code\n");

    return 0;
}