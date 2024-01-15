#include <stdio.h>

int main() {
    char str[30];
    char target;

    // user input
    printf("Enter a string: ");
    gets(str);
    printf("Enter the targer character: ");
    target = getchar();

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) { // first occurance
            while (str[i] != '\0') {
                str[i] = str[i+1]; // swapping values in prev indices
                i++;
            }
        }
    }

    printf("The updated string: %s", str);

    return 0;
}