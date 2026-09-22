#include <stdio.h>

// variable scope = Refers to where a variable is recognized and accessible.
//                  Variables can share the same name if
//                  they're in different scopes {}

// int x = 55; // Global variables 



int add(int x , int y){               // here  x and y are local variables 
    int result = x + y;
    return result;
}

int sub(int x , int y){
    int result = x - y;
    return result;
}

int main(){
    int x = add(5 , 9);
    int y = sub(100 , 99);

    printf("%d\n", x);
    printf("%d", y);
    return 0 ;
}