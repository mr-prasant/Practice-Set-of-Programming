#include <stdio.h>

int main() {
    char str[30];

    // user input
    printf("Enter name: ");
    gets(str);

    int len = 0;
    while (str[len] != '\0') len++;

    printf("length: %d", len);

    return 0;
}