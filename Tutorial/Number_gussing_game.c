#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));


    int guess_count = 0;
    int guess_limit = 2;
    int min = 1;
    int max = 100;
    int CorrectGuess =  rand() % ( max - min + 1) + min ;
    
    printf("** NUMBER GUESSING GAME **\n");
    printf("*Guess a number between 1 and 100*\n");
    printf("You have %d guesses\n", guess_limit);

    do{
        printf("Enter your guess : ");
        int guess;
        scanf("%d", &guess);
        guess_count++;
        if(guess < CorrectGuess){
            printf("Guess is too low\n");
            printf("Guesses left : %d\n", guess_limit - guess_count);
            
        }
        else if(guess > CorrectGuess){
            printf("Guess is too high\n");
            printf("Guesses left : %d\n", guess_limit - guess_count);
        }
        else{
            printf("You guessed it right\n");
            printf("You guessed it in %d guesses\n", guess_count);
            break;
        }
    }while(guess_count < guess_limit);

    if(guess_count == guess_limit){
        printf("Sorry , Better luck next time\n");
        printf("The correct guess was %d\n", CorrectGuess);
    }
    printf("Thank you for playing\n");
    printf("Have a nice day\n");
    return 0;
}
