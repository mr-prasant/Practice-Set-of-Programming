#include <stdio.h>

int main() {
    char str[30];

    // user input
    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] += 32; // Converting upper case to lower
        }
    }

    printf("String of lowercase: %s", str);

    return 0;
}