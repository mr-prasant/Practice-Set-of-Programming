#include <stdio.h>

int main() {
    char str[30];

    // user input
    printf("Enter a string: ");
    gets(str);

    int alp = 0, digs = 0, chars = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) {
            alp++; // alphabets
            continue;
        } 

        if (ch >= 48 && ch <= 57) {
            digs++; // digits
        } else {
            chars++; // characters
        }
    }

    printf("Alphabets: %d\nDigits: %d\nSpecial Characters: %d", alp, digs, chars);

    return 0;
}