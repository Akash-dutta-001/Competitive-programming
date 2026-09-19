#include <stdio.h>

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    float attendance[n], gpa[n];

    printf("Enter attendance and GPA for each student:\n");

    for (int i = 0; i < n; i++) {
        scanf("%f %f", &attendance[i], &gpa[i]);
    }

    printf("Scholarship eligible students:\n");

    for (int i = 0; i < n; i++) {
        if (attendance[i] >= 75 && gpa[i] >= 8.0) {
            printf("Student %d\n", i + 1);
        }
    }

    return 0;
}
