#include <stdio.h>
#include <stdlib.h>

int kabise(int year){  
    int count_a1 = 0, count_a2 = 0;
        int a = year - 1210;
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
            return 1 +(month - 1) * 31 + (year - 1206) * 365 + kabise(year);
        }
        else if(7 <= month && month <= 12){
            return  1 + (6 * 31) + (month - 1) * 30 + (year - 1206) * 365 + kabise(year);
        }
}




int main()
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
        printf(" Bye!");
    }
    
    else if(option == 1){
        printf("[0] back to menu\n\n");
        system("cls");

        int year, month, day;
        printf("enter year : ");
        scanf("%d", &year);
        printf("enter month : ");
        scanf("%d", &month);
        printf("enter day : ");
        scanf("%d", &day);
        while(year < 1206 || 1498 < year || month < 0 || 12 < month || day < 0 || 31 < day){
            system("cls");
            printf("\033[31mHey? I'm just an ordinary computer. I'm not god! \n");
            printf("enter year again: ");
            scanf("%d", &year);
            printf("enter month again : ");
            scanf("%d", &month);
            printf("enter day again : ");
            scanf("%d", &day);
            printf("\033[0m");
        }

        system("cls");
        
        switch(month){
            case 1 :
            printf("\t\t\t\033[32mFarvardin");
            //white background
            break;
            case 2 :
            printf("\t\t\033[32mOrdibehesht");
            break;
            case 3 :
            printf("\t\t\033[32mKhordad");
            break;
            case 4 :
            printf("\t\t\033[32mTir");
            break;
            case 5 :
            printf("\t\t\033[32mMordad");
            break;
            case 6 :
            printf("\t\t\033[32mShahrivar");
            break;
            case 7 :
            printf("\t\t\033[32mMehr");
            break;
            case 8 :
            printf("\t\t\033[32mAban");
            break;
            case 9 :
            printf("\t\t\033[32mAzar");
            break;
            case 10 :
            printf("\t\t\033[32mDey");
            break;
            case 11 :
            printf("\t\t\033[32mBahman");
            break;
            case 12 :
            printf("\t\t\033[32mEsfand");
            break;
        }

        printf("\033[0m");

        printf("\nSH\tYE\tDO\tSE\tCH\tPA\tJO\n");

        int i = 0;
        for(i = 0; i <= ((n(month, year) - 2) % 7); i ++){
            printf("\t");
        }
        int j = 1;
        for(j  = 1; j <= days(month, year); j++){
            printf("%d\t",j);
            if((i + j) % 7 == 0){
                printf("\n");
            }
        }
    }

    

    else if(option == 2){
        system("cls");
        int year, month, day, birth_year, birth_month, birth_day;
        printf("Enter today's date\n");
        printf("year : ");
        scanf("%d", &year);
        printf("month : ");
        scanf("%d", &month);
        printf("day : ");
        scanf("%d", &day);
        system("cls");
        printf("Enter your date of birth\n");
        printf("birth year : ");
        scanf("%d", &birth_year);
        printf("birth month : ");
        scanf("%d", &birth_month);
        printf("birth day : ");
        scanf("%d", &birth_day);

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

        printf("Congrats! You've lived %d years, %d months and %d days so far :)", past_years, past_months, past_days);
    }
}