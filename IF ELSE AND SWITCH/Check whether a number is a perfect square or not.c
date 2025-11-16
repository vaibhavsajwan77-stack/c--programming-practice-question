#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int isPerfectSquare = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (i * i == num) {
            isPerfectSquare = 1;
            break;
        }
    }
    if (num == 0 || num == 1) isPerfectSquare = 1;

    if (isPerfectSquare)
        printf("%d is a perfect square.\n", num);
    else
        printf("%d is not a perfect square.\n", num);

    return 0;
}
