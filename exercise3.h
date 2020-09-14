#include <stdio.h>

int exercise3() {
    int value = 0, check = 0;
    printf("Enter a number:");
    fflush(stdin);
    check = scanf("%d", &value);

    printf("\nscanf returned: %d", check);

    switch (check) {
        case 0:
            printf("\nUnsuccessful");
        case 1:
            printf("\nValid");
        default:
            printf("\n%dx Valid", check);
    }

    return check;
}