// C program for Library Book Management System
#include <stdio.h>
#include <string.h>

// Structure for storing book details
struct Book {
    int id;
    char title[50];
    int available;
};

struct Book lib[100];
int n = 0;

// Function to add a book
void addBook() {
    printf("Enter Book ID: ");
    scanf("%d", &lib[n].id);

    printf("Enter Book Title: ");
    scanf("%s", lib[n].title);

    lib[n].available = 1;
    n++;

    printf("Book Added\n");
}

// Function to issue a book
void issueBook() {
    int id;

    printf("Enter Book ID: ");
    scanf("%d", &id);

    for (int i = 0; i < n; i++) {
        if (lib[i].id == id) {

            if (lib[i].available == 1) {
                lib[i].available = 0;
                printf("Book Issued\n");
            } else {
                printf("Book Not Available\n");
            }

            return;
        }
    }

    printf("Book Not Found\n");
}

// Function to return a book
void returnBook() {
    int id;

    printf("Enter Book ID: ");
    scanf("%d", &id);

    for (int i = 0; i < n; i++) {
        if (lib[i].id == id) {
            lib[i].available = 1;
            printf("Book Returned\n");
            return;
        }
    }

    printf("Book Not Found\n");
}

// Function to display all books
void display() {
    for (int i = 0; i < n; i++) {
        printf("%d %s %s\n",
               lib[i].id,
               lib[i].title,
               lib[i].available ? "Available" : "Issued");
    }
}

// Main function
int main() {
    int ch;

    do {
        printf("\n1. Add Book");
        printf("\n2. Issue Book");
        printf("\n3. Return Book");
        printf("\n4. Display Books");
        printf("\n0. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                addBook();
                break;

            case 2:
                issueBook();
                break;

            case 3:
                returnBook();
                break;

            case 4:
                display();
                break;

            case 0:
                printf("Program Ended\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while (ch != 0);

    return 0;
}