#include <stdio.h>

int main() {
    char str[30];
    char target;

    // user input
    printf("Enter a string: ");
    gets(str);
    printf("Enter the targer character: ");
    target = getchar();

    int lasti = -1; // finding last occurrences
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            lasti = i;
        }
    }

    if (lasti >= 0) {
        while (str[lasti] != '\0') {
            str[lasti] = str[lasti+1]; // swapping values in prev indices
            lasti++;
        }
    }

    printf("The updated string: %s", str);
    
    return 0;
}