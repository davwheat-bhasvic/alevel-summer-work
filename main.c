#include <stdio.h>

#include "exercise1.h"
#include "exercise2.h"

#include "dateTest.h"

int main() {
    int option = -1;

    printf("1. Exercise 1 - multiplication test\n2. Exercise 2 - char -> ASCII value\n3. Date validation test\n\n0. Exit");

    while (option < 0 || option > 4) {
        printf("\n\nChoose an option: ");
        scanf("%d", &option);
    }

    switch (option) {
        case 0:
            return 0;
        case 1:
            return exercise1();
        case 2:
            return exercise2();
        case 3:
            return dateTest();
    }

    return 0;
}
