#include <stdio.h>

// write a program for a banking system
// 1. deposit money
// 2. withdraw money
// 3. check balance
// 4. exit

int main(){
    double deposite = 0.0;
    double withdraw = 0.0;
    double balance = 0.0;
    int choice = 0;
  
    do{
        printf("\n1.Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);       

        
        switch(choice){
            case 1 :
                printf("Enter the amount you want to deposite :: ");
                scanf("%lf", &deposite);
                balance += deposite;
                printf("$ %.2lf amount is deposited to your bank acount", deposite);
                break;

            case 2:
                printf("Enter the amount you want to withdraw :: ");
                scanf("%lf", &withdraw);
                
                if(balance <= 0){
                    printf("YE GAREEB NIKAL RE....AAYA KAISE TU YHA !!!");            
                }
                else{
                    balance -= withdraw ;
                    printf("$ %.2lf amount is withdrawed from your bank acount");
                }
                
                break;

            case 3:
                printf("Your bank balance is %.2lf $ ", balance);
                break;

            case 4:
                printf("THANK YOU FOR YOUR TIME (should have use it in better palaces but you choose bank of all the palaces :)))\n");
                printf("CUM AGAIN!!!");
                break;

            default:
                printf("KYA RE JADA SHANA BAN RHA HAI BAJAU KYA EK \n");
                printf("JO OPTION DIYE HAI UNME SE HI DAAL NA LAUDE!!");
                break;
        }
    }while(choice != 4);

   return 0;

}
