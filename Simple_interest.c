//Program to calculate Simple Interest
#include <stdio.h>
int main(){
    float principal,time,rate,simpleinterest,amount;
    printf("Enter the principal value :");
    scanf("%f",&principal);
    printf("Enter the rate :");
    scanf("%f",&rate);
    printf("Enter the time period (in years):");
    scanf("%f",&time);
    simpleinterest= (principal*rate*time)/100;
    amount=principal+simpleinterest;
    printf("The simple interest is %.2f and amount is %f",simpleinterest,amount);
return 0;
}