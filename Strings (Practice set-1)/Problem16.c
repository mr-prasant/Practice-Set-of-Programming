#include <stdio.h>

int main() {
    char str[30];
    char target;

    // user input
    printf("Enter a string: ");
    gets(str);
    printf("Enter the target character: ");
    target = getchar();

    int p = 0;
    int idx[30];
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) { // comparing each character to target
            idx[p] = i;
            p++;
        }
    }

    if (p == 0) {
        printf("%c is not found in %s!", target, str);
        return 0;
    }

    printf("The all occurrence index of %c in %s: ", target, str);
    for (int i = 0; i < p; i++) {
        printf("%d ", idx[i]);
    }

    puts(""); // line change

    return 0;
}