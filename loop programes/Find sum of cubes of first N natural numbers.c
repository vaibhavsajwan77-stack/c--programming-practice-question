#include <stdio.h>
int main() 
{
    int n, i, sum;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) 
        sum=sum+(i*i*i);
    printf("Sum = %d", sum);
    return 0;
}