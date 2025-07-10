//Program to convert numeric day to day name
#include <stdio.h>
int main(){
    int day;
    printf("Enter the numeric day :");  //1 to 7
    scanf("%d",&day);
    switch (day){
        case 1:
        printf("The day is Sunday");
        break;
        case 2:
        printf("The day is Monday");
        break;
        case 3:
        printf("The day is Tuesday");
        break;
        case 4:
        printf("The day is Wednesday");
        break;
        case 5:
        printf("The day is Thursday");
        break;
        case 6:
        printf("The day is Friday");
        break;
        case 7:
        printf("The day is Saturday");
        break;
        default:
        printf("Please Choose from 1 to 7");
        break;
        }
}