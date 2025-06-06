WAP to find Fibonnaci series upto n number using function.
Code:
#include <stdio.h>
void Fibonacci(int n)
{
    int first = 0, second = 1, next,i;
    for (i = 0; i < n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series up to %d terms:\n", n);
    Fibonacci(n);  

    return 0;
}
