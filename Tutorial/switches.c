#include <stdio.h>

// switch = An alternative to using many if-else statements
// More efficient w/ fixed integer values

int main(){
    int dayofweek;

    printf("Enter day no. (1 - 7) : ");
    scanf("%d",&dayofweek);

    switch(dayofweek){
        case 1:
            printf("IT IS Monday");
            break;
        case 2:
            printf("IT IS tue");
            break;
        case 3:
            printf("IT IS wed");
            break;
        case 4:
            printf("IT IS thu");
            break;
        case 5:
            printf("IT IS fri");
            break;
        case 6:
            printf("IT IS sat");
            break;
        case 7:
            printf("IT IS sunday");
            break;
        default:
        printf("JUST ENTER THE VALID INPUT U FUCKING SLUMBAG !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
    }
    return 0;
}

