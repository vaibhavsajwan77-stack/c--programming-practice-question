#include <stdio.h>

int main() 
{
    int n, i, product=1, digits;
    printf("Enter a number");
    scanf("%d", &n);
    while(n!=0)
    {
        digits=digits%10;
        product=product*digits;
        n=n/10;
    }
    printf("Product of digits=%d", product);
    return 0;
}