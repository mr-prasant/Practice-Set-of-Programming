#include<stdio.h>

int main() {
    char str[30];

    // user input
    printf("Enter a string: ");
    gets(str);

    int idx = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') { // finding the last non-space charcter
            idx = i;
        }
    }

    str[idx+1] = '\0'; // removing the trailing spaces

    printf("The updated string: %s.", str);

    return 0;
}