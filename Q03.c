WAP to determine whether the given number is negative, positive or zero using if-else statements.
Code:
#include <stdio.h>
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
        printf("The number %d is Positive.\n",num);
    else if (num < 0)
        printf("The number %d is Negative.\n",num);
    else
        printf("The number %d is Zero.\n",num);

    return 0;
}
