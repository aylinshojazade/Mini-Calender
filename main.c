#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>

int kabise(int year){
    int count_a1 = 0, count_a2 = 0;
        int a = year - 1210;
        if(a <= 0) {
            return 0;
        }

        else if(a > 0) {
            while(a >= 33) {
                a -= 33;
                    count_a1 ++;
            }
            while(a > 0) {
                a -= 4;
                count_a2 ++;
            }
            return (count_a1 * 8) + count_a2;
        }
}




int days(int month , int year){
    if(1 <= month && month <= 6){
        return 31;
    }
    else if(7 <= month && month <= 11){
        return 30;
    }
    else if(month == 12){
        if((year - 1210) % 7 == 0){
            return 30;
            }
            else {
            return 29;
            }
        }
}


int n(int month, int year){

        if(1 <= month && month <= 6){
            return  (month - 1) * 31 + (year - 1206) * 365 + kabise(year);
        }
        else if(7 <= month && month <= 12){
            return  (6 * 31) + (month - 7) * 30 + (year - 1206) * 365 + kabise(year);
        }
}



int option0(){
   // system("cls");
    printf(" Bye!");
    sleep(4);
    system("cls");
    exit(0);
}


int option1(){
   // system("cls");

    printf("[0] back to menu\n\n");

    int year, month, day;
    printf("enter year : ");
    scanf("%d", &year);
        if(year == 0){
            printf("\033[0m");
            manu(); //back to menu
        }
    //Invalid Year!
    while(year < 1206 || 1498 < year){
        system("cls");
        printf("[0] back to menu\n\n");
        printf("\033[31mHey? I'm just an ordinary computer. Even I can't make impossible things happen. \n");
        printf("enter year again : ");
        scanf("%d", &year);
        if(year == 0){
            printf("\033[0m");
            manu(); //back to menu
        }
       // printf("\033[0m");
    }

    printf("enter month : ");
    scanf("%d", &month);
        if(month == 0){
            printf("\033[0m");
            manu(); //back to menu
        }
    //Invalid Month!
    while(month < 0 || 12 < month){
        system("cls");
        printf("[0] back to menu\n\n");
        printf("\033[31mHey? I'm just an ordinary computer. Even I can't make impossible things happen. \n");
        printf("enter month again : ");
        scanf("%d", &month);
        if(month == 0){
            printf("\033[0m");
            manu(); //back to menu
        }
      //  printf("\033[0m");
    }
    printf("enter day : ");
    scanf("%d", &day);
        if(day == 0){
            printf("\033[0m");
            manu(); //back to menu
        }
    //Invalid day!
    while(day < 0 || 31 < day){
        system("cls");
        printf("[0] back to menu\n\n");
        printf("\033[31mHey? I'm just an ordinary computer. Even I can't make impossible things happen. \n");
        printf("enter day again : ");
        scanf("%d", &day);
        if(day == 0){
            printf("\033[0m");
            manu(); //back to menu
        }
       // printf("\033[0m");
    }

    system("cls");

    printf("\033[32m");//Color

    //Printing the name of the month
    switch(month){
        case 1 :
        printf("\t\tFarvardin");
        break;

        case 2 :
        printf("\t\tOrdibehesht");
        break;

        case 3 :
        printf("\t\tKhordad");
        break;

        case 4 :
        printf("\t\tTir");
        break;

        case 5 :
        printf("\t\tMordad");
        break;

        case 6 :
        printf("\t\tShahrivar");
        break;

        case 7 :
        printf("\t\tMehr");
        break;

        case 8 :
        printf("\t\tAban");
        break;

        case 9 :
        printf("\t\tAzar");
        break;

        case 10 :
        printf("\t\tDey");
        break;

        case 11 :
        printf("\t\tBahman");
        break;

        case 12 :
        printf("\t\tEsfand");
        break;
    }

    printf("\033[0m");

    printf("\nSH\tYE\tDO\tSE\tCH\tPA\tJO\n");

    int i = 0;
    for(i = 0; i < ((n(month, year) - 2) % 7); i ++){
    printf("\t");
    }
    for(int j  = 1; j <= days(month, year); j++){
    printf("%d\t",j);
        if((i + j) % 7 == 0){
            printf("\n");
        }
    }
    printf("\n\n...Plz enter b to back menu...");

    char ss = getch();

    while(ss != 'b'){
            system("cls");
            printf("\n\n...Plz enter b to back menu...");
            ss = getch();

    }
    if(ss == 'B' || ss == 'b'){
        manu();
    }

    }




int option2(){
    //system("cls");

    printf("[0] back to menu\n\n");

    int year, month, day, birth_year, birth_month, birth_day;
    printf("Enter today's date\n");
    printf("year : ");
    scanf("%d", &year);
    if(year == 0){
        manu(); //back to menu
    }
    //Invalid Year!
    while(year < 0){
        system("cls");
        printf("[0] back to menu\n\n");
        printf("\033[31mHey? I'm just an ordinary computer. Even I can't make impossible things happen. \n");
        printf("Enter year again\n");
        printf("year : ");
        scanf("%d", &year);
        if(year == 0){
            main(); //back to menu
        }
    }

    printf("month : ");
    scanf("%d", &month);
    if(month == 0){
        main(); //back to menu
    }
    //Invalid Month!
    while(month < 0 || 12 < month){
        system("cls");
        printf("[0] back to menu\n\n");
        printf("\033[31mHey? I'm just an ordinary computer. Even I can't make impossible things happen. \n");
        printf("Enter month again\n");
        printf("month : ");
        scanf("%d", &month);
        if(month == 0){
            manu(); //back to menu
        }
    }
    printf("day : ");
    scanf("%d", &day);
    if(day == 0){
        manu(); //back to menu
    }
    //Invalid Day!
    while(day < 0 || 31 < day){
        system("cls");
        printf("[0] back to menu\n\n");
        printf("\033[31mHey? I'm just an ordinary computer. Even I can't make impossible things happen. \n");
        printf("Enter day again\n");
        printf("day : ");
        scanf("%d", &day);
        if(day == 0){
            manu(); //back to menu
        }
    }
    printf("\033[0m");

    system("cls");
    printf("[0] back to menu\n\n");
    printf("Enter your date of birth\n");
    printf("birth year : ");
    scanf("%d", &birth_year);
    if(birth_year == 0){
        main(); //back to menu
    }
    //Invalid birth Year!
    while(year < 0){
        system("cls");
        printf("[0] back to menu\n\n");
        printf("\033[31mHey? I'm just an ordinary computer. Even I can't make impossible things happen. \n");
        printf("Enter birth year again\n");
        printf("year : ");
        scanf("%d", &year);
        if(year == 0){
            main(); //back to menu
        }
    }
    printf("birth month : ");
    scanf("%d", &birth_month);
    if(birth_month == 0){
        manu(); //back to menu
    }
    //Invalid birth Month!
    while(month < 0 || 12 < month){
        system("cls");
        printf("[0] back to menu\n\n");
        printf("\033[31mHey? I'm just an ordinary computer. Even I can't make impossible things happen. \n");
        printf("Enter birth month again\n");
        printf("month : ");
        scanf("%d", &month);
        if(month == 0){
            manu(); //back to menu
        }
    }
    printf("birth day : ");
    scanf("%d", &birth_day);
    if(birth_day == 0){
        manu(); //back to menu
    }
    //Invalid birth Day!
    while(day < 0 || 31 < day){
        system("cls");
        printf("[0] back to menu\n\n");
        printf("\033[31mHey? I'm just an ordinary computer. Even I can't make impossible things happen. \n");
        printf("Enter day again\n");
        printf("day : ");
        scanf("%d", &day);
        if(day == 0){
            main(); //back to menu
        }
    }

    system("cls");

    int past_years, past_months, past_days;
    //how many years?
    past_years = year - (birth_year + 1);
    //how many months?
    if(month >= birth_month){
        past_months = month - birth_month;
        past_years ++;
    }
    else if(month < birth_month){
        past_months = 12 + (month - birth_month);
    }
    //how many days?
    if(day >= birth_day){
        past_days = day - birth_day;
        past_months ++;
    }
    else if(day < birth_day){
        past_days = 31 + (day - birth_day);
    }

    int total_days =  day + ((month - 1) * 31) + ((year - 1206) * 365) + (kabise(birth_year) - kabise(year));

    //Birth day in week
    printf("If people celebrated their birthdays weekly, yours whould be on ");
    switch((total_days - 2) % 7) {
        case 0 :
        printf("Saturdays :)\n");
        break;
        case 1 :
        printf("Sundays :)\n");
        break;
        case 2 :
        printf("Mondays :)\n");
        break;
        case 3 :
        printf("Tuesdays :)\n");
        break;
        case 4 :
        printf("Wednesdays :)\n");
        break;
        case 5 :
        printf("Thusrdays :)\n");
        break;
        case 6 :
        printf("Fridays :)\n");
        break;
    }
    printf("Congrats! You've lived %d years, %d months and %d days so far.\n", past_years, past_months, past_days);
    printf("Which is %d days.", total_days);
}

int option3_1(){
    //system("cls");

    printf("[0] back to menu\n\n");
    // s : shamsi
    // g : gregorian
    int syear, smonth, sday, gyear, gmonth, gday;

    printf("Enter shamsi date\n");
    printf("year :");
    scanf("%d", &syear);
    if(syear == 0)
        manu(); //back to menu

    printf("month :");
    scanf("%d", &smonth);
    if(smonth == 0)
        manu(); //back to menu

    printf("day :");
    scanf("%d", &sday);
    if(sday == 0)
        manu(); //back to menu

    gyear = syear + 621;
    gmonth = (smonth + 2) % 12 + 1;
    gday = (sday + 31 - 11) % 31 + 1;
    if(smonth >= 10){
        gyear ++;
    }
    if(sday >= 11){
        gday ++;
    }

    printf("Gregorian date :\n");
    printf("%d %d %d", gyear, gmonth, gday);
}


int option3_select(){
    //system("cls");

    printf("[0] back to menu\n");
    printf("[1] Shmasi to Gregorian\n");
    printf("[2] Shamsi to Hijri\n");
    printf("[3] ?????\n");
    int option;
    scanf("%d", &option);

    if(option == 0)
        manu();// back to menu

    else if(option == 1)
        option3_1();

    // else if(option == 2)
    //     option3_2();
}

int manu()
{
    system("cls");
    printf("[0] Quit\n[1] Calendar\n[2] Age\n[3] Conversion \n\n");
    int option;
    printf("Select option : ");
    scanf("%d", &option);

    //Invalid input!
    while(option < 0 || 3 < option){
        system("cls");
        printf("\033[31mI don't talk with strangers! but since it's you I'll make an exeption :))\n");
        printf("Select option again : ");
        scanf("%d", &option);
    }
    printf("\033[0m");

    if(option == 0){
        system("cls");
        option0();
    }

    else if(option == 1){
        system("cls");
        option1();
    }

    else if(option == 2){
        system("cls");
        option2();
    }

    else if(option == 3){
        system("cls");
        option3_select();
    }
}

int main(){
    
    manu();
    
}
