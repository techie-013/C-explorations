//Program to find factorial of a number using recursion
#include <stdio.h>
int fact(int a);      //Function Prototype

int fact(int a){      //Function definition
    if(a==0){
        return 1; }
    else{return a*fact(a-1);}
}

int main(){
    int num,factorial;
    printf("Enter the number:");
    scanf("%d",&num);
     if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;}
    factorial=fact(num);  //Function call
    printf("The factorial of %d is %d",num,factorial);
return 0;}