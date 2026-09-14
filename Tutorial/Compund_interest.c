#include <stdio.h>
#include <math.h>

int main(){

    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timescompunded = 0;
    double total = 0.0;

    printf("COMPOUND INTERST CALCULATOR\n");

    printf("Enter your principal value : ");
    scanf("%lf",&principal);

    printf("Enter your rate value : ");
    scanf("%lf",&rate);
    rate = rate/100.0;

    printf("Enter years value : ");
    scanf("%d",&years);

    printf("Enter your timescompunded value : ");
    scanf("%d",&timescompunded);

    total = principal * pow((1 + (rate / timescompunded)),(years * timescompunded));

    printf("Your COMPOUND INTERST is :: $%.2lf\n",total);

    return 0;
}