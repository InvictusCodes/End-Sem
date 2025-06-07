WAP to Concatenate the given strings and check whether given string is Palindrome or not.
Code:
#include <stdio.h>
#include <string.h>

int Palindrome(char s[]) 
{
    int i, len = strlen(s);
    for (i = 0; i < len / 2; i++)
    {
        char a = s[i], b = s[len - 1 - i];
        if (a >= 'A' && a <= 'Z') a += 32;
        if (b >= 'A' && b <= 'Z') b += 32;
        if (a != b) return 0;
    }
    return 1;
}

int main()
{
    int n, i;
    char temp[100], result[1000] = "";

    printf("Enter the number of Strings: ");
    scanf("%d", &n);
    getchar(); 

    for (i = 0; i < n; i++)
    {
        gets(temp);
        strcat(result, temp);
        if (i < n - 1)
            strcat(result, " ");  
    }

    printf("\nConcatenated: %s\n", result);
    printf("The Concatenated string is  %s\n", Palindrome(result) ? "Palindrome" : "Not Palindrome");

    return 0;
}
