#include <stdio.h>

int main() {
    char str[30];

    // user input
    printf("Enter a string: ");
    gets(str);

    // storing the frequency
    int map1[26];
    int map2[26];

    for (int i = 0; i < 26; i++) {
        map1[i] = 0;
        map2[i] = 0;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 97 && str[i] <= 122) { // frequency counting of a character
            map1[str[i]-97]++; // lowercase frequency
        }

        if (str[i] >= 65 && str[i] <= 90) { // frequency counting of a character
            map2[str[i]-65]++; // uppercase frequency
        }
    }

    for (int i = 0; i < 26; i++) {
        if (map1[i] > 0) {
            printf("%c: %d   | \n", i+97, map1[i]);
        }       
    }

    for (int i = 0; i < 26; i++) {
        if (map2[i] > 0) {
            printf("%c: %d   | \n", i+65, map2[i]);
        }       
    }

    return 0;
}