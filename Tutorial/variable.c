#include <stdio.h>

int main(){

    
    int year = 182828;
    float gpa = 3.6;
    float price = 599.99;
    double pi = 3.14159265359;
    char grade = 'A';
    char me[] = {"AHAHAH HAHAHHA"};
    bool Bitch = true ;

   
    printf("Your are in %d \n", year);
    printf("Your gpa is %f \n", gpa);
    printf("Your price is %f  \n", price);
    printf("Your pi is %.15lf  \n", pi);
    printf("Your grade is %c \n", grade);
    printf("Your are %s \n", me);
    printf("Your are %d \n", Bitch);

    printf(sizeof(double));
    
    return 0;
}

// variable = A reusable container for a value.
//            Behaves as if it were the value it contains.

// int = whole numbers (4 bytes in modern systems)
// float = single-precision decimal number (4 bytes)
// double = double-precision decimal number (8 bytes)
// char = single character (1 byte)
// char[] = array of characters (size varies)
// bool = true or false (1 byte, requires <stdbool.h>)