#include <stdio.h>

int main()
{ 
int solar_year, solar_month, days, start_day;
printf("Enter solar year: "); 
scanf("%d", &solar_year); 
printf("Enter solar month: "); 
scanf("%d", &solar_month); // Calculate number of days in month 
switch(solar_month) {
    case 2: if(solar_year % 4 == 0 && (solar_year % 100 != 0 || solar_year % 400 == 0)) 
    days = 29; else days = 28; break;
    case 4: 
    case 6: 
    case 9: 
    case 11: 
    days = 30; 
    break; 
    default: 
    days = 31; 
    break; 
    } 
    // Calculate starting day of month 
    int x = solar_year / 100; 
    int y = solar_year % 100; 
    start_day = (1 + ((13 * (solar_month + 1)) / 5) + y + (y / 4) + (x / 4) - (2 * x)) % 7; 
    // Print solar calendar for month 
    printf(" Sun Mon Tue Wed Thu Fri Sat\n");
    int i; 
    for(i = 0; i < start_day; i++) {
    printf(" "); 
    for(i = 1; i <= days; i++) { 
        printf("%4d", i); 
        if((i + start_day) % 7 == 0) 
        printf("\n"); 
        }getch();
        return 0; 
        }

}