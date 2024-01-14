#include <stdio.h>

int main() {
    char str[30];

    // user input
    printf("Enter a sentence: ");
    gets(str);

    // check for blank space
    int p = 0;
    while (str[p] == ' ') {
        p++;
    }

    if (str[p] == '\0') {
        printf("Words not found!");
        return 0;
    }

    // split the sentence and store the words
    int w = 0;
    int t = 0;
    char words[30][30];
    while (str[p] != '\0') {
        if (str[p] == ' ') {
            w++;
            t = 0;

            // removing leading spaces
            while (str[p] != '\0' && str[p] == ' ') {
                p++;
            }

            // check for ending spaces
            if (str[p] == '\0') {
                break;
            }
        } 

        words[w][t] = str[p]; // storing the words
        t++;
        p++;

        words[w][t] = '\0'; // terminate the word
    }

    // reversing the words
    char rev[30];
    int r = 0;
    for (p = w-1; p >= 0; p--) {
        for (int i = 0; words[p][i] != '\0'; i++) {
            rev[r] = words[p][i];
            r++;
        }

        rev[r] = (p == 0)? '\0' : ' '; // giving space between the words
        r++;
    }

    printf("Reversed words: %s", rev);

    return 0;
}