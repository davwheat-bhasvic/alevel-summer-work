#include <stdio.h>
#include <time.h>

int main() {
    int year = -1;
    int month = -1;
    int day = -1;

    while (year > 2020 || year < 0) {
        printf("\nEnter your birth year: ");
        scanf("%d", &year);
    }

    while (month > 12 || month < 1) {
        printf("\nEnter your birth month: ");
        scanf("%d", &month);
    }

    while (((month == 9 || month == 4 || month == 6 || month == 11) && day > 30) ||
           ((month == 2 && (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0)) && day > 29) ||
           ((month == 2) && day > 28) ||
           day < 1) {
        printf("\nEnter your birth day: ");
        scanf("%d", &day);
    }

    printf("You were born: %d-%d-%d", year, month, day);

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    int nowYear = tm.tm_year;
    int nowMonth = tm.tm_mon;
    int nowDay = tm.tm_mday;

    printf("Today's date: %d-%d-%d", nowYear, nowMonth, nowDay);

    // TODO: Calculate difference between the dates

    return 0;
}
