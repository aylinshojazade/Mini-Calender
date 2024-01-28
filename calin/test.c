#include <stdio.h>

int main() {
    int shamsiYear, shamsiMonth, shamsiDay;
    int gregorianYear, gregorianMonth, gregorianDay;
    int shamsiDaysInMonth[] = {31, 31, 31, 31, 31, 31, 30, 30, 30, 30, 29, 29};
    int shamsiLeapDaysInMonth[] = {31, 31, 31, 31, 31, 31, 30, 30, 30, 30, 30, 29};

    printf("Enter a Shamsi date (yyyy mm dd): ");
    scanf("%d %d %d", &shamsiYear, &shamsiMonth, &shamsiDay);

    // Determine if this is a leap year in the Shamsi calendar
    int shamsiLeapYear = ((shamsiYear % 33) == 1) || ((shamsiYear % 33) == 5) || ((shamsiYear % 33) == 9) || ((shamsiYear % 33) == 13) || ((shamsiYear % 33) == 17) || ((shamsiYear % 33) == 22) || ((shamsiYear % 33) == 26) || ((shamsiYear % 33) == 30);

    // Calculate the number of days since the beginning of the year in the Shamsi calendar
    int shamsiDays = shamsiDay;
    for (int i = 0; i < (shamsiMonth - 1); i++) {
        if (shamsiLeapYear) {
            shamsiDays += shamsiLeapDaysInMonth[i];
        } else {
            shamsiDays += shamsiDaysInMonth[i];
        }
    }

    // Calculate the number of days between the Shamsi and Gregorian calendars
    int gregorianDays = (int) ((shamsiYear - 1) * 365.2425);
    for (int i = 1; i < shamsiYear; i++) {
        if (((i % 4) == 3) || ((i % 4) == 0)) {
            gregorianDays++;
        }
    }
    gregorianDays += shamsiDays - 226899; // Number of days between March 20, 622 AD (start of the Gregorian calendar) and March 21, 1380 AD (start of the Shamsi calendar)

    // Convert the number of days to a Gregorian date
    gregorianYear = 1380;
    while (gregorianDays > 365) {
        if (((gregorianYear % 4) == 3) || ((gregorianYear % 4) == 0)) {
            gregorianDays--;
        }
        gregorianDays -= 365;
        gregorianYear++;
    }
    if (((gregorianYear % 4) == 3) || ((gregorianYear % 4) == 0)) {
        if (gregorianDays == 60) {
            gregorianMonth = 2;
            gregorianDay = 29;
        } else if (gregorianDays < 60) {
            gregorianMonth = (int) ((gregorianDays + 31) / 31);
            gregorianDay = (gregorianDays % 31) + 1;
        } else {
            gregorianMonth = (int) ((gregorianDays - 60) / 31);
            gregorianDay = (gregorianDays % 31) + 1;
        }
    } else {
        if (gregorianDays < 59) {
            gregorianMonth = (int) ((gregorianDays + 31) / 31);
            gregorianDay = (gregorianDays % 31) + 1;
        } else {
            gregorianMonth = (int) ((gregorianDays - 59) / 31);
            gregorianDay = (gregorianDays % 31) + 1;
        }
    }

    printf("The Gregorian date is: %d %d %d\n", gregorianYear, gregorianMonth, gregorianDay);

    return 0;
}
