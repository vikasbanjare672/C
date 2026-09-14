#include <stdio.h>
#include <string.h>

int main(){

    char item[50] = "";
    float price = 0.0f;
    int quatity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("Enter name of the products your bitchass gonna use : ");
    fgets(item ,sizeof(item), stdin);
    item[strlen(item)-1] = '\0'; 

    printf("HURRY UP YOU PIECE OF FUCKING SHIT ENTER THR PRICE OF THE PRODUCT AN'T GOT WHOLE DAY FOR YOU!!! : ");
    scanf("%f",&price);

    printf("how many of those : ");
    scanf("%d",&quatity);
    
    total = price * quatity ;
    printf("SYBAU AND PAY THE FUCKING BILL : %.2f",total);
    printf(" %c",currency);



    return 0;
}