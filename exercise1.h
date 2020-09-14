#include <stdio.h>

int exercise1() {
    float num1 = 0, num2 = 0;

    printf("Enter number 1:");
    scanf("%f", &num1);

    printf("Enter number 2:");
    scanf("%f", &num2);

    float res = num1 * num2;

    printf("%f * %f = %f", num1, num2, res);
}