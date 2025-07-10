//Program to check if a number is armstrong or not
#include <stdio.h>
int main(){
    int num,sum=0;
    printf("Enter the number :");
    scanf("%d",&num);
    int value=num;
    while(value>0){
        int digit=value%10;
        int cube=digit*digit*digit;
        sum=sum+cube;
        value=value/10;}
    if (num==sum){
        printf("The number is An Armstrong Number");}
    else{
        printf("The number is Not An Armstrong Number");}
return 0;
}
