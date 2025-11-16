#include <stdio.h>

int main() {
    int age1, age2, age3;

    printf("Enter age of first person: ");
    scanf("%d", &age1);

    printf("Enter age of second person: ");
    scanf("%d", &age2);

    printf("Enter age of third person: ");
    scanf("%d", &age3);

    if (age1 >= age2 && age1 >= age3)
        printf("First person is the oldest.\n");
    else if (age2 >= age1 && age2 >= age3)
        printf("Second person is the oldest.\n");
    else
        printf("Third person is the oldest.\n");

    return 0;
}