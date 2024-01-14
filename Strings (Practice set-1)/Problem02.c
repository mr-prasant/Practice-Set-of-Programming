#include <stdio.h>

int main() {
    char src[30];
    char dest[30];
    
    // user input
    printf("Enter name: ");
    gets(src);

    for (int i = 0; src[i] != '\0'; i++)
    dest[i] = src[i];

    printf("Name copied: %s", dest);

    return 0;
}