WAP to calculate sum of first n natural numbers using while loop.
Code
#include <stdio.h>
int main()
{
    int n, sum = 0, i = 0, digits;
    printf("Enter the number of digits: ");
    scanf("%d", &n);
    printf("\nEnter the digits:\n");
    while (i < n)
    {
        scanf("%d", &digits);
        sum += digits;
        i++;
    }
    printf("\nThe Sum of %d digits is %d\n", n, sum);

    return 0;
}
