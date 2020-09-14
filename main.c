#include <stdio.h>
#include <time.h>

int main() {
    int year = -1,
            month = -1,
            day = -1;


    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    int nowYear = tm.tm_year,
            nowMonth = tm.tm_mon,
            nowDay = tm.tm_mday;

    while (year > nowYear || year < 0) {
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


    printf("Today's date: %d-%d-%d", nowYear, nowMonth, nowDay);

    // TODO: Calculate difference between the dates

    return 0;
}
