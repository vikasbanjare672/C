#include <stdio.h>
#include <math.h>

int main(){

    int choice = 0;
    float kg = 1.0f;
    float pound = 0.0f;

    printf("****** Weight Converter ******");
    printf("Enter 1 if you want Kg -> Pound");
    printf("Enter 2 if you want Pound -> Kg ");

    printf("Enter your choice BITCH:: ");
    scanf("%d", &choice);

    if(choice == 1){
        
        printf("Enter kgs :");
        scanf("%f", &kg);
        
        kg *= 2.20462;
        
        printf("Your converted Kg -> Pound value is : %.2f\n", kg);
    }
    else if(choice == 2){
        printf("Enter pound :");
        scanf("%f", &pound); 

        pound /= 2.20462;
        
        printf("Your converted Pound -> Kg value is : %.2f\n", pound);
    }

    return 0;
}