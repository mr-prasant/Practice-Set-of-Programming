#include <stdio.h>

int main() {
    char str[30];

    // user input
    printf("Enter a string: ");
    gets(str);

    int low = 0, high = 0;
    while (str[high] != '\0') {
        high++; // high = length
    }

    high--; // last index
    while (low < high) {

        // swapping low and high index
        char temp = str[low];
        str[low] = str[high];
        str[high] = temp;

        low++;
        high--;
    }

    printf("Reversed string: %s", str);

    return 0;
}