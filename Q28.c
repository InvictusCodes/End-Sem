WAP to calculate sum of first n natural numbers using while loop.
Code
#include <stdio.h>

int main()
{
    int n, i = 1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum += i;
        i++;
    }

    printf("The sum of first %d natural numbers is %d\n", n, sum);

    return 0;
}
