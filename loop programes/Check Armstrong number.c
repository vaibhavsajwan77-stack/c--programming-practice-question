#include <stdio.h>

int main() {
    int num, original, remainder, result = 0, n = 0;

    scanf("%d", &num);
    original = num;

   
    for (int temp = num; temp != 0; temp /= 10)
        n++;

   
    for (int temp = num; temp != 0; temp /= 10) {
        remainder = temp % 10;
        int power = 1;
        for (int i = 0; i < n; i++)
            power *= remainder;
        result += power;
    }

    if (result == original)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}