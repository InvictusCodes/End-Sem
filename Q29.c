Write a program in c to display n number of natural numbers and their sum.
Code:
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number of Natural numbers:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        printf("\n%d",i);
        sum+=i;
    }
    printf("\nThe Sum of %d Natural Numbers is %d",n,sum);
    return 0;
}
