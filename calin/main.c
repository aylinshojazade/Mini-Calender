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



void option0(){
   // system("cls");
    printf(" Bye!");
    sleep(4);
    system("cls");
    exit(0);
}




void option1(){
   // system("cls");

    printf("[0] back to menu\n\n");

    int year, month, day;
    printf("enter year : ");
    scanf("%d", &year);
        if(year == 0){
            printf("\033[0m");
            printf(" Back to menu!");
            sleep(4);
            menu(); //back to menu
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
            printf(" Back to menu!");
            sleep(4);
            menu(); //back to menu
        }
        printf("\033[0m");
    }

    printf("enter month : ");
    scanf("%d", &month);
        if(month == 0){
            printf("\033[0m");
            printf(" Back to menu!");
            sleep(4);
            menu(); //back to menu
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
            printf(" Back to menu!");
            sleep(4);
            menu(); //back to menu
        }
        printf("\033[0m");
    }
    printf("enter day : ");
    scanf("%d", &day);
        if(day == 0){
            printf("\033[0m");
            printf(" Back to menu!");
            sleep(4);
            menu(); //back to menu
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
            printf(" Back to menu!");
            sleep(4);
            menu(); //back to menu
        }
       printf("\033[0m");
    }
    

    int n; // n = past days until the first of that month
    if (1 <= month && month <= 6)
        n = (month - 1) * 31 + (year - 1206) * 365 + kabise(year);

    else if (7 <= month && month <= 12)
        n = (6 * 31) + (month - 7) * 30 + (year - 1206) * 365 + kabise(year);

    int daysinmonth_shamsi[12] = {31, 31, 31, 31, 31, 31, 30, 30, 30, 30, 30};
    
    if ((year - 1210) % 7 == 0)
        daysinmonth_shamsi[12] = 30;

    else
        daysinmonth_shamsi[12] = 29;
    

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
    for(i = 0; i < ((n - 2) % 7); i ++){
    printf("\t");
    }
    for(int j  = 1; j <= daysinmonth_shamsi[month]; j++){
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
        menu();
    }

    }




void option2(){
    //system("cls");

    printf("[0] back to menu\n\n");

    int year, month, day, birth_year, birth_month, birth_day;
    printf("Enter today's date\n");
    printf("year : ");
    scanf("%d", &year);
    if(year == 0){
        printf(" Back to menu!");
        sleep(4);
        menu(); //back to menu
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
            printf(" Back to menu!");
            sleep(4);
            menu(); //back to menu
        }
    }

    printf("month : ");
    scanf("%d", &month);
    if(month == 0){
        printf(" Back to menu!");
        sleep(4);
        menu(); //back to menu
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
            printf(" Back to menu!");
            sleep(4);
            menu(); //back to menu
        }
    }
    printf("day : ");
    scanf("%d", &day);
    if(day == 0){
        printf(" Back to menu!");
        sleep(4);
        menu(); //back to menu
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
            printf(" Back to menu!");
            sleep(4);
            menu(); //back to menu
        }
    }
    printf("\033[0m");

    system("cls");
    printf("[0] back to menu\n\n");
    printf("Enter your date of birth\n");
    printf("birth year : ");
    scanf("%d", &birth_year);
    if(birth_year == 0){
        printf(" Back to menu!");
        sleep(4);
        menu(); //back to menu
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
            printf(" Back to menu!");
            sleep(4);
            menu(); //back to menu
        }
    }
    printf("birth month : ");
    scanf("%d", &birth_month);
    if(birth_month == 0){
        printf(" Back to menu!");
        sleep(4);
        menu(); //back to menu
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
            printf(" Back to menu!");
            sleep(4);
            menu(); //back to menu
        }
    }
    printf("birth day : ");
    scanf("%d", &birth_day);
    if(birth_day == 0){
        printf(" Back to menu!");
        sleep(4);
        menu(); //back to menu
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
            printf(" Back to menu!");
            sleep(4);
            menu(); //back to menu
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

    printf("\n\n...Plz enter b to back menu...");
    char ss = getch();
    while(ss != 'b'){
            system("cls");
            printf("\n\n...Plz enter b to back menu...");
            ss = getch();
    }
    if(ss == 'B' || ss == 'b'){
        menu();
    }
}




void option3_shamsi_to_gregorian(){
    system("cls");

    int daysinmonth_shamsi[12] = {31, 31, 31, 31, 31, 31, 30, 30, 30, 30, 30, 29};
    float daysinmonth_gregorian[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("[0] back to menu\n\n");
    // s : shamsi
    // g : gregorian
    int syear, smonth, sday, gyear = 1827, gmonth = 1, gday = 1;

    printf("Enter shamsi date\n");
    printf("year : ");
    scanf("%d", &syear);
    if(syear == 0)
        printf(" Back to menu!");
        sleep(4);
        menu(); //back to menu
    //Invalid shamsi year!
    while(syear <  0){
        system("cls");
        printf("[0] back to menu\n\n");
        printf("\033[31mHey? I'm just an ordinary computer. Even I can't make impossible things happen. \n");
        printf("Enter shamsi year again\n");
        printf("year : ");
        scanf("%d", &syear);
        if(syear == 0){
            printf(" Back to menu!");
            sleep(4);
            menu(); //back to menu
        }
    }
    printf("\033[0m");


    printf("month : ");
    scanf("%d", &smonth);
    if(smonth == 0){
        printf(" Back to menu!");
        sleep(4);
        menu(); //back to menu
    }
        //Invalid shamsi month!
    while(smonth < 0 || 12 < smonth){
        system("cls");
        printf("[0] back to menu\n\n");
        printf("\033[31mHey? I'm just an ordinary computer. Even I can't make impossible things happen. \n");
        printf("Enter shamsi month again\n");
        printf("month : ");
        scanf("%d", &smonth);
        if(smonth == 0){
            printf(" Back to menu!");
            sleep(4);
            menu(); //back to menu
        }
    }
    printf("\033[0m");

    printf("day : ");
    scanf("%d", &sday);
    if(sday == 0){
        printf(" Back to menu!");
        sleep(4);
        menu(); //back to menu
    }
        //Invalid shamsi Day!
    while(sday < 0 || 31 < sday){
        system("cls");
        printf("[0] back to menu\n\n");
        printf("\033[31mHey? I'm just an ordinary computer. Even I can't make impossible things happen. \n");
        printf("Enter shamsi day again\n");
        printf("day : ");
        scanf("%d", &sday);
        if(sday == 0){
            printf(" Back to menu!");
            sleep(4);
            menu(); //back to menu
        }
    }
    printf("\033[0m");

    system("cls");

    int n = 0;
    n += 78;
    n += (syear - 1206) * 365;

    for (int i = 0; i <smonth - 1; i++){
        n += daysinmonth_shamsi[i];
    }
    n += sday;

    while (n >= 365){
        n -= 365;
        gyear ++;
    }

    int i = 0;
    while (n >= daysinmonth_gregorian[i]){
        n -= daysinmonth_gregorian[i];
        gmonth ++;
    }
    gday += n;

    printf("Shamsi date : \n");
    printf("%d %d %d", syear, smonth, sday);
    printf("Gregorian date : \n");
    printf("%d %d %d", gyear, gmonth, gday);

    printf("\n\n...Plz enter b to back menu...");
    char ss = getch();
    while(ss != 'b'){
            system("cls");
            printf("\n\n...Plz enter b to back menu...");
            ss = getch();
    }
    if(ss == 'B' || ss == 'b'){
        menu();
    }
}






void option3_shamsi_to_hijri(){
    system("cls");

    int daysinmonth_shamsi[12] = {31, 31, 31, 31, 31, 31, 30, 30, 30, 30, 30, 29};
    float daysinmonth_hijri[12] = {30, 30, 29, 30, 29, 30, 29, 30, 29, 30, 29, 29};

    printf("[0] back to menu\n\n");
    // s : shamsi
    // h : hijri
    int syear, smonth, sday, hyear = 1242, hmonth = 1, hday = 1;

    printf("Enter shamsi date\n");
    printf("year : ");
    scanf("%d", &syear);
    if(syear == 0){
        printf(" Back to menu!");
        sleep(4);
        menu(); //back to menu
    }
    //Invalid shamsi year!
    while(syear <  0){
        system("cls");
        printf("[0] back to menu\n\n");
        printf("\033[31mHey? I'm just an ordinary computer. Even I can't make impossible things happen. \n");
        printf("Enter shamsi year again\n");
        printf("year : ");
        scanf("%d", &syear);
        if(syear == 0){
            printf(" Back to menu!");
            sleep(4);
            menu(); //back to menu
        }
    }
    printf("\033[0m");

    printf("month : ");
    scanf("%d", &smonth);
    if(smonth == 0){
        printf(" Back to menu!");
        sleep(4);
        menu(); //back to menu
    }
        //Invalid shamsi month!
    while(smonth < 0 || 12 < smonth){
        system("cls");
        printf("[0] back to menu\n\n");
        printf("\033[31mHey? I'm just an ordinary computer. Even I can't make impossible things happen. \n");
        printf("Enter shamsi month again\n");
        printf("month : ");
        scanf("%d", &smonth);
        if(smonth == 0){
            printf(" Back to menu!");
            sleep(4);
            menu(); //back to menu
        }
    }
    printf("\033[0m");

    printf("day : ");
    scanf("%d", &sday);
    if(sday == 0){
        printf(" Back to menu!");
        sleep(4);
        menu(); //back to menu
    }
        //Invalid shamsi Day!
    while(sday < 0 || 31 < sday){
        system("cls");
        printf("[0] back to menu\n\n");
        printf("\033[31mHey? I'm just an ordinary computer. Even I can't make impossible things happen. \n");
        printf("Enter shamsi day again\n");
        printf("day : ");
        scanf("%d", &sday);
        if(sday == 0){
            printf(" Back to menu!");
            sleep(4);
            menu(); //back to menu
        }
    }
    printf("\033[0m");



    int n = 0;
    n += 227;
    n += (syear - 1206) * 365 + kabise(syear);

    for (int i = 0; i <smonth - 1; i++){
        n += daysinmonth_shamsi[i];
    }
    n += sday - 1;

    float temp = 0;
    while (n >= 354){
        temp += 0.36;
        n -= 354;
        hyear ++;
    }
    n -= temp;

    int i = 0;
    while (n >= daysinmonth_hijri[i]){
        n -= daysinmonth_hijri[i];
        hmonth ++;
    }
    hday += n;

    printf("Shamsi date : \n");
    printf("%d %d %d", syear, smonth, sday);
    printf("\n\nHijri date : \n");
    printf("%d %d %d", hyear, hmonth, hday);

    printf("\n\n...Plz enter b to back menu...");
    char ss = getch();
    while(ss != 'b'){
            system("cls");
            printf("\n\n...Plz enter b to back menu...");
            ss = getch();
    }
    if(ss == 'B' || ss == 'b'){
        menu();
    }
}







void option3_gregorian_to_shmasi(){
    system("cls");

    int daysinmonth_shamsi[12] = {31, 31, 31, 31, 31, 31, 30, 30, 30, 30, 30, 29};
    float daysinmonth_gregorian[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("[0] back to menu\n\n");
    // s : shamsi
    // g : gregorian
    int syear = 1205, smonth = 1, sday = 1, gyear, gmonth, gday;

    printf("Enter gregoian date\n");
    printf("year : ");
    scanf("%d", &gyear);
    if(gyear == 0){
        printf(" Back to menu!");
        sleep(4);
        menu(); //back to menu
    }
    //Invalid gregorian year!
    while(gyear <  0){
        system("cls");
        printf("[0] back to menu\n\n");
        printf("\033[31mHey? I'm just an ordinary computer. Even I can't make impossible things happen. \n");
        printf("Enter gregorian year again\n");
        printf("year : ");
        scanf("%d", &gyear);
        if(gyear == 0){
            printf(" Back to menu!");
            sleep(4);
            menu(); //back to menu
        }
    }
    printf("\033[0m");


    printf("month : ");
    scanf("%d", &gmonth);
    if(gmonth == 0)
        menu(); //back to menu
        //Invalid gregorian month!
    while(gmonth < 0 || 12 < gmonth){
        system("cls");
        printf("[0] back to menu\n\n");
        printf("\033[31mHey? I'm just an ordinary computer. Even I can't make impossible things happen. \n");
        printf("Enter gregorian month again\n");
        printf("month : ");
        scanf("%d", &gmonth);
        if(gmonth == 0){
            printf(" Back to menu!");
            sleep(4);
            menu(); //back to menu
        }
    }
    printf("\033[0m");

    printf("day : ");
    scanf("%d", &gday);
    if(gday == 0){
        printf(" Back to menu!");
        sleep(4);
        menu(); //back to menu
    }
        //Invalid gregorian Day!
    while(gday < 0 || 31 < gday){
        system("cls");
        printf("[0] back to menu\n\n");
        printf("\033[31mHey? I'm just an ordinary computer. Even I can't make impossible things happen. \n");
        printf("Enter gregorian day again\n");
        printf("day : ");
        scanf("%d", &gday);
        if(gday == 0){
            printf(" Back to menu!");
            sleep(4);
            menu(); //back to menu
        }
    }
    printf("\033[0m");

    system("cls");

    int n = 0;
    n += 285;
    n += (gyear - 1827) * 365;

    for (int i = 0; i <gmonth - 1; i++){
        n += daysinmonth_gregorian[i];
    }
    n += gday;

    while (n >= 365){
        n -= 365;
        syear ++;
    }

    int i = 0;
    while (n >= daysinmonth_shamsi[i]){
        n -= daysinmonth_shamsi[i];
        smonth ++;
    }
    sday += n;


    printf("Gregorian date : \n");
    printf("%d %d %d", gyear, gmonth, gday);
    printf("\n\nShamsi date : \n");
    printf("%d %d %d", syear, smonth, sday);


    printf("\n\n...Plz enter b to back menu...");
    char ss = getch();
    while(ss != 'b'){
            system("cls");
            printf("\n\n...Plz enter b to back menu...");
            ss = getch();
    }
    if(ss == 'B' || ss == 'b'){
        menu();
    }
}





void option3_select(){
    system("cls");

    printf("[0] back to menu\n");
    printf("[1] Shmasi to Gregorian\n");
    printf("[2] Shamsi to Hijri\n");
    printf("[3] Gregorian to Shamsi\n");
    printf("[4] Gregorian to Hijri?????\n");

    int option;
    scanf("%d", &option);
    //Invalid option
    while(option < 0 || 3 < option){
        system("cls");
        printf("\033[31mI don't talk with strangers! but since it's you I'll make an exeption :))\n");
        printf("Select option again : ");
        scanf("%d", &option);
    }
    printf("\033[0m");


    if(option == 0){
        printf(" Back to menu!");
        sleep(4);
        menu();// back to menu
    }

    else if(option == 1)
        option3_shamsi_to_gregorian();

    else if(option == 2)
        option3_shamsi_to_hijri();

    else if(option == 3)
        option3_gregorian_to_shmasi();

}

void menu()
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
    
    menu();
    
}
