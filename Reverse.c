//Program to reverse a number and print its sum of digits
#include <stdio.h>
int main(){
    int num,sum=0,reverse=0,value;
    printf("Enter the number :");
    scanf("%d",&num);
    int onum=num;
    while(num>0){
        int digit=num%10;
        sum=sum+digit;
        reverse=digit+(reverse*10); 
        num=num/10;}
printf("The sum of digit in %d is %d\n",onum,sum);
printf("The reverse of digit in %d is %d",onum,reverse);
return 0;
}