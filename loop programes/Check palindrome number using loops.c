#include <stdio.h>

int main() 
{
    int num, r = 0, d, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (num != 0) 
    {
        d = num % 10;
        r = r * 10 + d;
        num=num/10;
    }
    if (temp== r) 
        printf("Palindrome number.");
    else 
        printf("Not a palindrome number.");

    return 0;
}