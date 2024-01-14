#include <stdio.h>

int main() {
    char str[30];

    // user input
    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] -= 32; // Converting lower case to upper
        }
    }

    printf("String with uppercase: %s", str);

    return 0;
}