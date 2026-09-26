#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main(){

    int random = 0;
    char products[50] = "";
    double price = 0.0f;

    printf("Enter the product name  (Available :: Face wash , Pen , Mobile , Laptop , Gyaatttt) : ");
    fgets(products ,sizeof(products) , stdin);
    products[strlen(products) - 1] = '\0';

    printf("product : %s\n\n", products);

    printf("Enter the price of the product : ");
    scanf("%lf", &price);
    printf("price : %.2lf\n\n", price);

    srand(time(NULL));
    random = rand() % 5 + 1 ;
    printf("*******************************************\n");
    printf("*********** LUCKY NUMBERS ARE *************\n");
    printf("*******************************************\n");
    printf("      lucky number for facewash is 1\n");
    printf("      lucky number for Pen is 2\n");
    printf("      lucky number for Mobile is 3\n");
    printf("      lucky number for Laptop is 4\n");
    printf("      lucky number for Gyaatttt is 5\n\n");
    printf("*******************************************\n");

    printf("Your lucky number %d.\n", random);
    
    //switch case for lucky number and prize

    switch(random){
        case 1 :
            if (products == "facewash" || products ==  "Facewash") {
                printf("You have WON Maskara");
            }
            else{
                printf("Sorry , Better luck next time :0\n");

            }
            break;

        case 2 :
            if (products == "pen" || products == "Pen") {
                printf("You have WON rubber") ;
            }
            else{
                printf("Sorry , Better luck next time\n") ;
            }
            break;

        case 3 :
            if (products == "Mobile" || products == "mobile") {
                printf("You have WON a EARB ");
            }
            else{
                printf("Sorry , Better luck next time\n");
            }
            break;

        case 4 :
            if (products == "laptop" || products == "Laptop") {
                printf("You have WON a 5000 rupee voucher!");
            }
            else{
                printf("Sorry , Better luck next time\n") ;
            }
            break;

        case 5 :
            if (products == "gyat" || products == "Gyaatttt") {
                printf("You have WON a baddie voucher!") ;
            }
            else{
                printf("Sorry , Better luck next time\n") ;
            }
            break;
        default :
            printf("SLAPPPP!!!!!!!!!!!!!!");
    }
    return 0 ;
}