#include <stdio.h>
#include <time.h>

int dateTest() {
    int year = -1,
            month = -1,
            day = -1;


    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    // year is counted from 1900
    int nowYear = tm.tm_year + 1900,
    // starts at 0!
    nowMonth = tm.tm_mon + 1,
            nowDay = tm.tm_mday;

    while (year > nowYear || year < 0) {
        printf("Enter your birth year: ");
        scanf("%d", &year);
    }

    while (month > 12 || month < 1) {
        printf("Enter your birth month: ");
        scanf("%d", &month);
    }

    while (((month == 9 || month == 4 || month == 6 || month == 11) && day > 30) ||
           ((month == 2 && (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0)) && day > 29) ||
           ((month == 2) && day > 28) ||
           day < 1) {
        printf("Enter your birth day: ");
        scanf("%d", &day);
    }

    printf("\nYou were born: %d-%d-%d", year, month, day);


    printf("\nToday's date: %d-%d-%d", nowYear, nowMonth, nowDay);

    // TODO: Calculate difference between the dates
}