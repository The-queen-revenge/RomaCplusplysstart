#include <stdio.h>
#include <stdlib.h>


typedef struct Date {
    unsigned year;
    unsigned month;
    unsigned day;
} Date;


unsigned ask_user(const char *text, const unsigned min, const unsigned max) {
    while (1) {
        unsigned userData;
        printf("%s", text);
        scanf("%d", &userData);

        if (userData >= min && userData <= max)
            return userData;
    }
}


int main() {
    Date d1, d2;

    d1.year = ask_user("Enter year of first date: ", 1500, 2500);
    d1.month = ask_user("Enter month of first date: ", 1, 12);
    d1.day = ask_user("Enter day of first date: ", 1, 31);

    d2.year = ask_user("Enter year of second date: ", 1500, 2500);
    d2.month = ask_user("Enter month of second date: ", 1, 12);
    d2.day = ask_user("Enter day of second date: ", 1, 31);

    unsigned firstDays = d1.year * 365 + d1.month * 31 + d1.day, secondDays = d2.year * 365 + d2.month * 31 + d2.day;

    if (firstDays > secondDays)
        printf("The second date precedes the first\n");
    else if (firstDays < secondDays)
        printf("The first date precedes the second\n");
    else
        printf("Its the same dates\n");

    printf("Difference in days: %d\n", abs((int)(firstDays - secondDays)));

    return 0;
}