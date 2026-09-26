#include <stdio.h>
#include <string.h>

// while loop = Continue some code WHILE the condition remains true
//              Condition must be true for us to enter while loop

int main(){
/*
    int a = 0 ;

    do{
        printf("Memeow\n");
        
        printf("Enter a value :");
        scanf("%d", &a);
    }while (a <= 0 );                */

    char name[50] = "";

    printf("Enter your name : ");
    fgets(name , sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    
    while (strlen(name) == 0){
        printf("Bitch i just ask for your fucking name...JUST ENTER THAT : ");
        fgets(name , sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    }
    
    printf("Hello %s :)", name);

    return 0;
}