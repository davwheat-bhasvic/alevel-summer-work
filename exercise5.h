#include <stdio.h>

int exercise5() {
    char c;
    int asciiDiff = 97 - 65;

    printf("Enter a capital letter: ");
    // space before %c needed to ignore whitespace from enter key
    scanf(" %c", &c);

    printf("\n   char: %c", c);
    printf("\ncapital: %c", (int) c + asciiDiff);

    return 0;
}