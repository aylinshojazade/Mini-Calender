#include <stdio.h>

int main() {
    int shamsiYear, shamsiMonth, shamsiDay;
    int gregorianYear, gregorianMonth, gregorianDay;
    int shamsiDaysOfYear = 0, remainingDays;

    // Arrays to hold the number of days in each month for both calendars
    int shamsiMonthDays[] = {31, 31, 31, 31, 31, 31, 30, 30, 30, 30, 29, 29};
    int gregorianMonthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Prompt the user to enter a Shamsi date
    printf("Enter a Shamsi date in the format yyyy mm dd: ");
    scanf("%d %d %d", &shamsiYear, &shamsiMonth, &shamsiDay);

    // Calculate the number of days in the Shamsi year up to the given date
    for (int i = 0; i < shamsiMonth - 1; i++) {
        shamsiDaysOfYear += shamsiMonthDays[i];
    }
    if (shamsiMonth > 11 && ((shamsiYear % 4 == 3 && shamsiYear % 100 != 99) || shamsiYear % 400 == 399)) {
        shamsiDaysOfYear += 30; // Leap year
    }
    shamsiDaysOfYear += shamsiDay;

    // Calculate the corresponding Gregorian year
    gregorianYear = shamsiYear + 621;

    // Calculate the number of days in the Gregorian year
    if ((gregorianYear % 4 == 0 && gregorianYear % 100 != 0) || gregorianYear % 400 == 0) {
        gregorianMonthDays[1] = 29; // Leap year
    }
    remainingDays = shamsiDaysOfYear + 79; // March 21 is the 80th day of the year in the Gregorian calendar

    // Calculate the Gregorian month and day that correspond to the given Shamsi date
    for (int i = 0; i < 12; i++) {
        if (remainingDays <= gregorianMonthDays[i]) {
            gregorianMonth = i + 1;
            gregorianDay = remainingDays;
            break;
        }
        remainingDays -= gregorianMonthDays[i];
    }

    // Print out the resulting Gregorian date
    printf("The corresponding Gregorian date is %04d-%02d-%02d\n", gregorianYear, gregorianMonth, gregorianDay);

    return 0;
}
