#include <stdio.h>

int main() {
    char str[30];

    // user input
    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] -= 32; // lower to upper
            continue;
        } 

        if (str[i] >= 65 && str[i] <= 90) {
            str[i] += 32; // upper to lower
        }
    }

    printf("String with toggled case: %s", str);

    return 0;
}