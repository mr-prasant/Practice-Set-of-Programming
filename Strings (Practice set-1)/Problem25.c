#include <stdio.h>

int main() {
    char str[30];
    char target, replaced;

    // user input
    printf("Enter a string: ");
    gets(str);
    printf("Enter the character to be replaced: ");
    target = getchar();
    getchar();
    printf("Enter the new character: ");
    replaced = getchar();

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) { // comparing each character to target
            str[i] = replaced;
            break;
        }
    }

    printf("The updated string: %s", str);

    return 0;
}