#include<stdio.h>

int main() {
    char str[30];

    // user input
    printf("Enter a string: ");
    gets(str);

    int idx = 0; // index of first character
    while (str[idx] != '\0' && str[idx] == ' ') { // check the leading space
        idx++;
    }

    int i = 0;
    if (i < idx) { // check for leading space is present
        while (str[idx] != '\0') {
            str[i] = str[idx];
            i++;
            idx++;
        }

        str[i] = '\0'; // terminating the string
    }

    idx = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') { // finding the last non-space charcter
            idx = i;
        }
    }

    str[idx+1] = '\0'; // terminating the string

    printf("The updated string: %s.", str);

    return 0;
}