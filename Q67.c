WAP to find largest number using ternary  operator.
Code:
#include<stdio.h>
int main()
{
    int a,b,c,largest;
    printf("Enter the three numbers :\n");
    scanf("%d %d %d",&a,&b,&c);
    largest=(a>b)?a:b;
    largest=(largest>c)?largest:c;
    printf("The largest number is %d",largest);
    return 0;
}
