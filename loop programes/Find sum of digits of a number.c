#include <stdio.h>

int main() 
{
    int n, i, sum, digits;
    printf("Enter a number");
    scanf("%d", &n);
    while(n!=0)
    {
        digits=digits%10;
        sum=sum+digits;
        n=n/10;
    }
    printf("Sum of digits=%d", sum);
    return 0;
}