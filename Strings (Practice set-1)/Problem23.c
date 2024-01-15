#include <stdio.h>

int main() {
    char str[30];
    char target;

    // user input
    printf("Enter a string: ");
    gets(str);
    printf("Enter the targer character: ");
    target = getchar();

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) { // check the target
            int j = i+1;
            while (str[j] != '\0' && str[j] == target) {
                j++; // search the next non character
            }

            str[i] = str[j]; // storing the non target value

            if (str[j] != '\0') {
                str[j] = target; // update the non target value to target
            }
        }
    }

    printf("The updated string: %s", str);

    return 0;
}