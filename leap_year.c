#include<stdio.h>

int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if ((year%4==0 && year%100!=0) || year%400==0){
        printf("The year %d is a Leap Year", year);
    }
    else{
        printf("The Year %d is not a leap year", year);
    }

    return 0;
}