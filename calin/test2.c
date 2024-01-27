#include <stdio.h>

void shamsiToGregorian(int syear, int smonth, int sday, int *gyear, int *gmonth, int *gday){
    int gy, gm, gd;
    int jy, jm, jd;
    long int julian;

    jy = syear + 979;
    jm = smonth;
    jd = sday;
    julian = (365 * jy) + ((jy / 33) * 8) + ((jy % 33 + 3) / 4) + 78 + jd + (((jm < 7) ? (jm - 1) * 31 : ((jm - 7) * 30) + 186));
    gy = 1600 + (400 * (julian / 146097));
    julian %= 146097;
    if (julian >= 36525){
        gy += 100 * (--julian / 36524);
        julian %= 36524;
        if (julian >= 365){
            gy += 4 * (julian / 1461);
            julian %= 1461;
            if (julian >= 366){
                gy += (julian - 1) / 365;
                julian = (julian - 1) % 365;
            }
        }
    }
    gy += 4 * (julian / 1461);
    julian %= 1461;
    if (julian >= 366){
        gy += (julian - 1) / 365;
        julian = (julian - 1) % 365;
    }
    gd = julian + 1;
    for (gm = 0; gd > ((gm < 6) ? 31 - (gm % 2) : 30 - (gm % 2)); gm++){
        gd -= (gm < 6) ? 31 - (gm % 2) : 30 - (gm % 2);
    }
    *gyear = gy;
    *gmonth = gm + 1;
    *gday = gd;
}

void gregorianToHijri(int gyear, int gmonth, int gday){
    int hyear, hmonth, hday;
    int jd, wd, i;
    int k[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

    jd = (1461 * (gyear + 4800 + (gmonth - 14) / 12)) / 4 +
         (367 * (gmonth - 2 - 12 * ((gmonth - 14) / 12))) / 12 -
         (3 * ((gyear + 4900 + (gmonth - 14) / 12) / 100)) / 4 +
         gday - 32075;

    wd = jd % 7;

    hday = jd - 1948440 + 10632;
    hyear = (hday - 1) / 354;
    hday = hday - 354 * hyear + ((3 + (11 * hyear)) / 30);
    hmonth = (hday - k[i = (hday / 30)]) + 1;
    hday -= k[i];

    printf("Hijri date: %d/%d/%d\n", hyear, hmonth, hday);
}

int main(){
    int syear, smonth, sday;
    int gyear, gmonth, gday;

    printf("Enter Shamsi date (YYYY/MM/DD): ");
    scanf("%d/%d/%d", &syear, &smonth, &sday);

    shamsiToGregorian(syear, smonth, sday, &gyear, &gmonth, &gday);
    gregorianToHijri(gyear, gmonth, gday);

    return 0;
}
