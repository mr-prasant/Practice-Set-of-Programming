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

    // checking the first occurrance of word
    for (int i = 0; i <= strlen-wrdlen; i++) {
        if (str[i] == word[0]) { // checking the first character
            char isEqual = 't';

            if ((i > 0 && str[i-1] != ' ') // checking the space around word
            || (i+wrdlen < strlen && str[i+wrdlen] != ' ')) {
                continue;
            }

            int j = i+1;
            while ( j < wrdlen) {
                if (str[i+j] != word[j]) { // checking the word
                    isEqual = 'f';
                }

                j++;
            }

            int k = i;
            if (isEqual == 't') { // removing the word
                if (str[k+wrdlen] == ' ') {
                    wrdlen++; // removing the space just after word
                }

                while (str[k+wrdlen] != '\0') {
                    str[k] = str[k+wrdlen];
                    k++;
                }

                str[k] = '\0'; // terminating the word
                strlen -= wrdlen;
                wrdlen--;
                i--; // again checking the same updated index
            }
        }
    }
    
    printf("The updated string: %s", str);

    return 0;
}