#include<stdio.h>

int main(){
    int month,year;
    scanf("%d %d",&month,&year);
    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        if((year%400==0)||(year%4==0 && year%100!=0)){
            printf("This is a month of 31 days and it is a leap year");
        }
        else{
             printf("This is a month of 31 days and  is a non leap year");
        }
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        if((year%400==0)||(year%4==0 && year%100!=0)){
            printf("This is a month of 30 days and it is a leap year");
        }
        else{
             printf("This is a month of 30 days and  is a non leap year");
        }
        break;
        case 2:
        if((year%400==0)||(year%4==0 && year%100!=0)){
            printf("This is a Feb month of 29 days and it is a leap year");
        }
        else{
             printf("This is a feb month of 28 days and is a non leap year");
        }
        break;
    }

    return 0;
}