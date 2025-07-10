#include <stdio.h>
int main(){
    int num,fact=1;
    printf("Enter the number :");
    scanf("%d",&num);
    int onum=num;
    if(num==0){
        printf("The factorial of 0 is 1");
        return 0;}
    while(num>=1){
    fact=num*fact;
    num=num-1;
    }
    printf("The factorial of %d is %d",onum,fact);
    return 0;
}