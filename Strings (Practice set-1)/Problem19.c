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

    // storing minimum frequency
    int minf = 1000000007;
    char lowf;

    for (int i = 0; i < 26; i++) {
        if (map1[i] > 0 && map1[i] < minf) {
            minf = map1[i];
            lowf = i+97;
        }

        if (map2[i] > 0 && map2[i] < minf) {
            minf = map2[i];
            lowf = i+65;
        }
    }

    printf("The lowest frequency character in %s: %c with frequency %d!", str, lowf, minf);

    return 0;
}