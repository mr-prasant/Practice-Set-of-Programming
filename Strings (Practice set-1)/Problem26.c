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

    int idx = -1; // last index
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) { // comparing each character to target
            idx = i; // updating last index
        }
    }

    // update last occurrence
    if (idx > -1) str[idx] = replaced;

    printf("The updated string: %s", str);

    return 0;
}