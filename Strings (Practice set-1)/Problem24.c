#include <stdio.h>

int main() {
    char str[30];

    // user input
    printf("Enter a string: ");
    gets(str);

    int map[128]; // frequency of characters

    for (int i = 0; i < 128; i++) {
        map[i] = 0;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        map[(int) str[i]]++; // counting frequency
    }

    char fstr[30];
    int p = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (map[(int) str[i]] < 2) {
            fstr[p] = str[i]; // taking character < frequency 1
            p++;
        }
    }

    fstr[p] = '\0';

    printf("The updated string: %s", fstr);

    return 0;
}