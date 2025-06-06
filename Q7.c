WAP to check whether the number is Prime or not.
Code:
#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,flag;
    flag=1;
    printf("enter any number to check prime:");
    scanf("%d",&n);
    for(i=2;i<=(n-1);i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("\n %d is prime number",n);
    }
    else
    {
        printf("\n%d is not a prime number.",n);
    }
    return 0;
}
