#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    int ComputerChoice = rand() % 3 + 1;
    int PlayerChoice = 0;

    printf("\n1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissor\n");

    printf("Enter your choice : ");
    scanf("%d", &PlayerChoice);

    printf("Your choice is %d\n", PlayerChoice);
    printf("Computer choice is %d\n", ComputerChoice);

    if (ComputerChoice == PlayerChoice){
        printf("Draw\n");
    }
    else if (ComputerChoice == 1 && PlayerChoice == 2 || ComputerChoice == 2 && PlayerChoice == 3 || ComputerChoice == 3 && PlayerChoice == 1){
        printf("You win\n");
        printf("Computer chose %d\n", ComputerChoice);
    }
    else{
        printf("You lose\n");
    }

    return 0;
}