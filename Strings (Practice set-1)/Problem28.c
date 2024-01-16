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
    int idx = -1;
    for (int i = 0; i <= strlen-wrdlen; i++) {
        if (str[i] == word[0]) { // checking the first character
            char isEqual = 't';
            for (int j = 1; j < wrdlen; j++) { // checking the rest character
                if (str[i+j] != word[j]) {
                    isEqual = 'f';
                    break;
                }
            }

            if (isEqual == 't') {
                idx = i;
                break;
            }
        }
    }

    if (idx == -1) {
        printf("%s is not found in %s", word, str);
    } else {
        printf("%s is found in %s at index: %d", word, str, idx);
    }

    return 0;
}