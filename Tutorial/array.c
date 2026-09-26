#include <stdio.h>

int main(){

    int numbers[] = { 10, 20, 30, 40, 50, 60};

    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    char name[] = {"vikas banjare"};

    printf("%d\n", numbers[0]);
    printf("%c\n", grades[3]);
    printf("%c\n", name[0]);

    for (int i = 0; i < sizeof(name)/sizeof(name[0]); i++){
        printf("%c", name[i]);
    }
    printf("\n");

    for (int j = 0; j < sizeof(grades)/sizeof(grades[0]); j++){
        printf("%c ", grades[j]);
    }    
    printf("\n");

    for (int k = 0; k < sizeof(numbers)/sizeof(numbers[0]); k++){
        printf("%d ", numbers[k]);
    } 

    return 0;
}