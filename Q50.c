WAP to find length of Given string and copy one string using user defined function
Code:
#include <stdio.h>

int findLength(char str[]) {
    int i = 0;
    do {
        if (str[i] == '\0') break;
        i++;
    } while (1);
    return i;
}

void copyString(char dest[], char src[]) {
    int i = 0;
    do {
        dest[i] = src[i];
    } while (src[i++] != '\0');
}

int main() {
    char str1[100], str2[100];

    printf("Enter a string: ");
    scanf(" %s", str1);

    int len = findLength(str1);
    copyString(str2, str1);

    printf("Length = %d\n", len);
    printf("Copied String = %s\n", str2);

    return 0;
}
