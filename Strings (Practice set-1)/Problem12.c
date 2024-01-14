#include <stdio.h>

int main() {
    char str[30];

    // user input
    printf("Enter a string: ");
    gets(str);

    char isPalindrome = 't';
    int low = 0, high = 0;

    while (str[high] != '\0') {
        high++; // high = length
    }

    high--; // last index
    while (low < high) {
        if (str[low] != str[high]) { // comapare the first and last characters
            isPalindrome = 'f';
            break;
        }

        low++;
        high--;
    }


    if (isPalindrome == 't') {
        printf("%s is a Palindrome!", str);
    } else {
        printf("%s is not a Palindrome!", str);
    }

    return 0;
}