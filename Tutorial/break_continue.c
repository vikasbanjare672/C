#include <stdio.h>

// break = Break out of a loop (STOP)
// continue = Skip current cycle of a loop (SKIP)

int main(){

    for ( int i = 1; 1 <= 10; i++){
        if(i == 4){
            printf("%d\n", i);
            continue;
        }
        else if(i == 8){
            printf("%d", i);
            break;
        }
    }
    return 0 ;
}