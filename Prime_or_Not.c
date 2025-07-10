//Program to print first 10 prime numbers
#include <stdio.h>
int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
      int is_prime=1;
      for(int i=2;i<=num-1;i++){
        if(num%i==0){
            is_prime=0;}}
    if (is_prime){
         printf("The Number Is Prime");
    }
    else{ printf("The Number Is Not Prime");}
           
         
return 0;}