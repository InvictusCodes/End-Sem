WAP to find GCD of given number using recursive functions
Code:
#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}
int main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    
    printf("The GCD of %d and %d is %d",x,y,gcd(x,y));
    return 0;

}
