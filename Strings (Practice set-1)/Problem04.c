#include <stdio.h>

int main() {
    char str1[30];
    char str2[30];

    // user input
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    int cmp = 0;
    for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) { // comparing each character of two strings
            cmp = str1[i] - str2[i];
            break;
        }
    }

    printf("Compare value: %d", cmp);

    return 0;
}