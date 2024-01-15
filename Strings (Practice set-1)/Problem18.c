#include <stdio.h>

int main() {
    char str[30];
    
    // user input
    printf("Enter a string: ");
    gets(str);

    int map1[26]; // storing the frequency
    int map2[26];
    for (int i = 0; i < 26; i++) {
        map1[i] = 0;
        map2[i] = 0;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 97 && str[i] <= 122) { // frequency counting of a character
            map1[str[i]-97]++;
        }

        if (str[i] >= 65 && str[i] <= 90) { // frequency counting of a character
            map2[str[i]-65]++;
        }
    }

    // storing maximum frequency
    int maxf = 0;
    char higf;
    for (int i = 0; i < 26; i++) {
        if (map1[i] > maxf) {
            maxf = map1[i];
            higf = i+97;
        }

        if (map2[i] > maxf) {
            maxf = map2[i];
            higf = i+65;
        }
    }

    printf("The highest frequency character in %s: %c with frequency %d!", str, higf, maxf);

    return 0;
}