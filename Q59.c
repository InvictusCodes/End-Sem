WAP to find the sum of numbers using do while loop.
Code:
#include <stdio.h>
int main()
{
    int n, sum = 0, i = 0, digits;
    printf("Enter the number of digits: ");
    scanf("%d", &n);
    printf("\nEnter the digits:\n");
    do
    {
        scanf("%d", &digits);
        sum+=digits;
        i++;
    }
    while (i<n);
    printf("\nThe Sum of %d digits is %d\n", n, sum);
    
    return 0;
}
