#include <stdio.h>

int main() {
    int marks;
    printf("Enter marks (0–100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks. Please enter a value between 0 and 100.\n");
    } else if (marks >= 90) {
        printf("Grade: A+ (Outstanding)\n");
    } else if (marks >= 80) {
        printf("Grade: A (Excellent)\n");
    } else if (marks >= 70) {
        printf("Grade: B (Very Good)\n");
    } else if (marks >= 60) {
        printf("Grade: C (Good)\n");
    } else if (marks >= 50) {
        printf("Grade: D (Satisfactory)\n");
    } else if (marks >= 40) {
        printf("Grade: E (Needs Improvement)\n");
    } else {
        printf("Grade: F (Fail)\n");
    }

    return 0;
}