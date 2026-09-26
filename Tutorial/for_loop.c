#include <stdio.h>
#include <windows.h>

// for loop = Repeat some code a limited # of times
//            for(Initialization; Condition; Update)

int main(){
    
    for (int i = 0 ; i < 10 ; i++){
        Sleep(1000);
        printf("Memeow\n");
    }

    return 0 ;
}
