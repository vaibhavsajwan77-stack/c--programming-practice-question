#include <stdio.h>

int main() {
    int age1, age2, age3;

    printf("Enter age of person 1: ");
    scanf("%d", &age1);

    printf("Enter age of person 2: ");
    scanf("%d", &age2);

    printf("Enter age of person 3: ");
    scanf("%d", &age3);

    if (age1 <= age2 && age1 <= age3) {
        printf("Person 1 is the youngest.\n");
    } else if (age2 <= age1 && age2 <= age3) {
        printf("Person 2 is the youngest.\n");
    } else {
        printf("Person 3 is the youngest.\n");
    }

    return 0;
}