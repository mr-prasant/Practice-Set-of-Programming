#include <stdio.h>

int main() {
    char str[30];

    // user input
    printf("Enter a string: ");
    gets(str);

    int consts = 0, vowels = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        
        if ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
        || (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
            vowels++; // count vowels
            continue;
        }

        if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) {
            consts++; // count consonants
        }
    }

    printf("Vowels: %d\nConsonants: %d", vowels, consts);

    return 0;
}