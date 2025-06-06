WAP to check if the user entered the number is divisible or not.
Code:
#include<stdio.h>
#include<math.h>
int main()
{
    int n,divisible;
    printf("Enter the number to check whether the number is divisible by 10 or not:");
    scanf("%d",&n);
    divisible=n%10;
    if(divisible!=0)
    {
        printf("\nThe Number %d is not divisible by 10",n);
    }
    else
    {
        printf("\nThe Number %d is divisible by 10",n);
    }
    return 0;
}
