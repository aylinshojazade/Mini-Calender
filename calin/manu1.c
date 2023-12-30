#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("[0] Quit\n[1] Calendar\n[2] Age\n[3] Conversion\n\n");
    printf("Select option : ");
    int option;
    scanf("%d", &option);
    if(option == 0){
        system("cls");
        printf("Bye!");
    }
    //printf("%c[%dmHELLO!\n", 0x1D, 35);
    /*
    static const char * CSI = "\33[";
    printf( "%s%sHI", CSI, "32m" );
    */

   printf("\033[32mhi\n");
   printf("\x1b[32mhi");
   printf("\033[0m");
   
}