#include <stdio.h>

int main() {
    char str[30];
    char target;

    // user input
    printf("Enter a string: ");
    gets(str);
    printf("Enter the targer character: ");
    target = getchar();

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) { // comparing each character to target
            count++;
        }
    }

    printf("The total number of occurrence of %c in %s: %d", target, str, count);

    return 0;
}