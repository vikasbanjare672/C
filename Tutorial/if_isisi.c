#include <stdio.h>

int main(){
    int a ;
    int b = 1 ; 
    int result = 0;
    printf("Enter a desired number that you want to create a table of :");
    scanf("%d", &a);
    
    while(b <= 10){
        result = a * b ;
        printf("%d\n", result);
        b++ ;
    }
    return 0;
}

