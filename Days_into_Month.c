//Convert days into month and days
#include <stdio.h>
int main(){
    int months,daysi,dayso;  //Here daysi is input value of day and dayso output value of day
    printf("Enter the number of Months: ");
    scanf("%d",&daysi);
    months=daysi/30;
    dayso=daysi%30;
    printf("The number of month is %d and days %d in %d days",months,dayso,daysi);
return 0;
}