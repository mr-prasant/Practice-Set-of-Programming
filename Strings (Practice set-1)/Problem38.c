#include<stdio.h>

int main() {
    char str[30];

    // user input
    printf("Enter a string: ");
    gets(str);

    // removing the leading space
    int idx = 0; // index of first character
    while (str[idx] != '\0' && str[idx] == ' ') { // check the leading space
        idx++;
    }

    int i = 0;
    if (i < idx) { // check for leading space is present
        while (str[idx] != '\0') {
            str[i] = str[idx];
            i++;
            idx++;
        }

        str[i] = '\0'; // terminating the string
    }

    // removing the extra space between
    int c = 0; // extra spaces
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            i++;
            c = 0; 

            int j = 0;
            for (j = i; str[j] != '\0' && str[j] == ' '; j++) {
                c++;
            }

            // check for trailing space
            if (i+c == j && str[j] == '\0') {
                str[i-1] ='\0';
                break;
            }

            j = i;
            if (c > 0) {
                while (str[j+c] != '\0') { // shifting the string
                    str[j] = str[j+c];
                    j++;
                }

                str[j] = '\0';
            }
        }
    }


    printf("The updated string: %s.", str);


    return 0;
}