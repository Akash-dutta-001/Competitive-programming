// University Attendance Analysis in C
#include <stdio.h>

int main() {
    int n, i, threshold;
    float attendance[100], sum = 0;
    int below = 0, lowestPos = 0;

    // Enter number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Enter attendance of each student
    printf("Enter attendance percentages:\n");

    for (i = 0; i < n; i++) {
        scanf("%f", &attendance[i]);
        sum = sum + attendance[i];
    }

    // Enter attendance threshold
    printf("Enter threshold: ");
    scanf("%d", &threshold);

    // Find students below threshold and lowest attendance
    for (i = 0; i < n; i++) {

        // Count students below threshold
        if (attendance[i] < threshold)
            below++;

        // Find lowest attendance
        if (attendance[i] < attendance[lowestPos])
            lowestPos = i;
    }

    // Display results
    printf("Students below threshold = %d\n", below);
    printf("Lowest attendance = %.2f\n", attendance[lowestPos]);
    printf("Position = %d\n", lowestPos + 1);
    printf("Average attendance = %.2f\n", sum / n);

    return 0;
}