#include <stdio.h>
#include <stdbool.h>

// function prototype = Provide the compiler w/ information about a function's:
//                      name, return type, and parameters before its actual definition.
//                      Enables type checking and allows functions to be used before they're defined.
//                      improves readability, organization, and helps prevent errors.

void hello( char name[] , int age);
bool agecheck( int age);

int main(){

    hello("Memeow" , 30);

    if(agecheck(14)){
        printf("you are a cutie pie :)");
    }
    else{
        printf("YOU ARE DISgUSTING");
    }

    return 0;
}

void hello( char name[] , int age){
    printf("Hello %s\n", name);
    printf("You are %d\n",age);
}

bool agecheck( int age){
    return age >= 16 ;
}