#include <stdio.h>

#include "exercise1.h"
#include "exercise2.h"
#include "exercise3.h"
#include "exercise4.h"
#include "exercise5.h"

#include "dateTest.h"

int main() {
    int option = -1;

    printf("1. Exercise 1 - multiplication test\n");
    printf("2. Exercise 2 - char -> ASCII value\n");
    printf("3. Exercise 3 - error checking\n");
    printf("4. Exercise 4\n");
    printf("5. Exercise 5 - lowercase to uppercase\n");
    printf("6. Date validation test\n");
    printf("\n0. Exit\n");

    while (option < 0 || option > 6) {
        printf("\nChoose an option: ");
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
            return exercise3();
        case 4:
            return exercise4();
        case 5:
            return exercise5();
        case 6:
            return dateTest();
    }

    return 0;
}
