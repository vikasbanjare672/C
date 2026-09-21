#include <stdio.h>

int main(){
    int day = 0;
    
    printf("Enter the number of day (1 - 7) : ");
    scanf("%d", &day);

    switch(day){
        case 1 :
            printf("IT IS MONDAY");
            break;
        case 2 :
            printf("IT IS tue");
            break;
        case 3 :
            printf("IT IS weds");
            break;
        case 4 :
            printf("IT IS thru");
            break;
        case 5 :
            printf("IT IS fri");
            break;
       case 6 :
            printf("IT IS sat");
            break;
        case 7 :
            printf("IT IS sunday");
            break;
        default:
            printf("ENTER THE CORRECT NUMBER PLSSSSSSSSSSSSSSSS!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
    }
    return 0;
}
