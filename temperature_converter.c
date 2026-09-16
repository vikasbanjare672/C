#include <stdio.h>
#include <ctype.h>

int main(){

    char choice = '\0';
    float F = 0.0f;
    float C = 0.0f;

    printf("****** TEMPERETURE CONVERTOR ******\n");
    printf("*** F . for C -> F ***\n");
    printf("*** C . for F -> C ***\n");
    
    printf("Enter your choice: ");
    scanf("%c", &choice);
    choice = toupper(choice);

    if(choice == 'F'){
        printf("Enter C value : ");
        scanf("%f", &C);
        F = (C * (9/5.0) + 32);
        
        printf("Your F in C is : %.2f", C);
    }

    else if(choice == 'C'){
        printf("Enter F value : ");
        scanf("%f", &F);

        C = (F - 32) * (5/9.0);
        
        printf("Your C in F is : %.2f", C);
    }    
    
    else{
        printf("Invalid input !!!");
    }

    return 0;
}