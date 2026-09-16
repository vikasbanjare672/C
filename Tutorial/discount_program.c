#include <stdio.h>
#include <stdbool.h>

int main(){
    float price = 99.99;
    int studentInput;
    bool isStudent;

    printf("***************************************\n");
    printf("Price of your movie ticket is $99.99 :)\n");
    printf("But if you are a student then yot get 10%% off...\n");
    printf("If not then prices will be 20%% more :)\n\n");


    printf("Enter '1' if u are student or '0' if not : ");
    scanf("%d", &studentInput);
    isStudent = studentInput;

    if(isStudent){
        printf("You are a stupidy if you are a student and THAT U ARE!!\n");
        price *= 0.9;
    }
    else{
        printf("WELCOME DEAR WE ARE YOUR SERVENT :)\n");
        price *= 1.2;
    }

    printf("The price of the ticket will be : $%.2f\n", price);

    return 0;
}