#include <stdio.h>

int main() {
    char str[30];
    char word[30];

    // user input
    printf("Enter a string: ");
    gets(str);
    printf("Enter the word: ");
    gets(word);

    // finding the length of the string and word
    int strlen = 0;
    int wrdlen = 0;
    while (str[strlen] != '\0') {
        strlen++;
    }

    while (word[wrdlen] != '\0') {
        wrdlen++;
    }

    // checking the last occurrance of word
    int idx[1];
    idx[0] = -1;
    int p = 0;
    for (int i = 0; i <= strlen-wrdlen; i++) {
        if (str[i] == word[0]) { // checking the first character
            char isEqual = 't';

            if ((i > 0 && str[i-1] != ' ') // checking the space around word
            || (i+wrdlen < strlen && str[i+wrdlen] != ' ')) {
                continue;
            }

            int j = i+1;
            while ( j < wrdlen) {
                if (str[i+j] != word[j]) {
                    isEqual = 'f';
                }

                j++;
            }

            if (isEqual == 't') {
                idx[p] = i;
                p++;
            }
        }
    }

    if (idx[0] == -1) {
        printf("%s word is not found in %s", word, str);
    } else {
        printf("The all occurrence is: ");
        for (int i = 0; i < p; i++) {
            printf("%d ", idx[i]);
        }
    }

    return 0;
}