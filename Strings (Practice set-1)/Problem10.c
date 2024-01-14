#include <stdio.h>

int main() {
    char str[30];

    // user input
    printf("Enter a string: ");
    gets(str);

    // check the length of a string >= 1;
    int count = 0, p = 0;

    // aux string having formatted spaces
    char fstr[30];

    if (str[0] == '\0') { // checking empty word
        count = 0;
    } else {
        int i = 0;
        
        // remove leading spaces
        while (str[i] == ' ') i++;

        // store first character to fstr
        if (str[i] != '\0') {
            fstr[p] = str[i];
            i++;
            p++;
        }

        // storing the one space separated words to fstr
        while (str[i] != '\0') {

            // removing spaces more than once occured between the words
            while (str[i] != '\0' && str[i] == ' ') {
                if (fstr[p-1] != ' ') {
                    fstr[p] = ' ';
                    p++;
                }

                i++;
            }

            if (str[i] == '\0') { // checking the ending spaces
                break;
            }

            fstr[p] = str[i];
            i++;
            p++;
        }
    }

    // count the spaces of fstr
    for (int i = 0; fstr[i] != '\0'; i++) {
        if (fstr[i] == ' ') {
            count++;
        }
    }

    if (fstr[p-1] != ' ') {
        count++;
    }

    printf("Total of words: %d", count);

    return 0;
}