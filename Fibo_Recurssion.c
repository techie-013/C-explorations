//Program to find factorial of a number using recursion
#include <stdio.h>
int fact(int a);       //Function prototype

int fibo(int a){      //Function definition
    if(a==1){
        return 0;
    }
   else if(a==2){
    return 1;}
    else{
     return fibo(a-1)+fibo(a-2);}}


int main(){
    int num,fibonacci;
    printf("Enter the no. of elements in fibonacci series :");
    scanf("%d",&num);
    printf("The fibonacci Series is :\n ");
    for(int i=1;i<=num;i++){
     fibonacci=fibo(i);    //Function Call
     printf("%d\t",fibonacci);}
    return 0;}
    