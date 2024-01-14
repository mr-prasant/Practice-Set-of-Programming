#include <stdio.h>

int main() {
    char firstName[30];
    char lastName[30];

    // user input
    printf("Your first name: ");
    gets(firstName);
    printf("Last name: ");
    gets(lastName);

    int p = 0;
    char fullName[100] = ""; // initialize full name

    // copy first name
    for (int i = 0; firstName[i] != '\0'; i++) {
        fullName[p] = firstName[i];
        p++;
    }

    fullName[p] = ' '; // space

    // copy last name
    for (int i = 0; lastName[i] != '\0'; i++) {
        p++;
        fullName[p] = lastName[i];
    }
    
    printf("Your full name: %s", fullName);

    return 0;
}