#include <stdio.h>

int main() {
    char str[30];
    char target;

    // user input
    printf("Enter a string: ");
    gets(str);
    printf("Enter the target character: ");
    target = getchar();

    int index = -1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) { // comparing each character to target
            index = i;
        }
    }

    if (index == -1) {
        printf("%c is not found in %s!", target, str);
    } else {
        printf("The last occurrence index of %c in %s: %d", target, str, index);
    }

    return 0;
}