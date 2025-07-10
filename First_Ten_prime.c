//Program to print first 10 prime numbers
#include <stdio.h>
int main(){
    int count=0,num=2;
    printf("The first 10 prime numbers are \n");
    while(count<10){
      int is_prime=1;
      for(int i=2;i<=num-1;i++){
        if(num%i==0){
            is_prime=0;
            break;}}
    if(is_prime){
        printf("%d\n",num);
        count++;
        }
        num++;}
return 0;}