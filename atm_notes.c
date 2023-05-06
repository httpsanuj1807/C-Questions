#include<stdio.h>

int main(){
    int t_amt;
    int n500=0;
    int n100=0;
    int n50=0;
    int n20=0;
    int n10=0;
    int n5=0;
    int n2=0;
    int n1=0;
    scanf("%d", &t_amt);
    int r_amt=0;

    n500=t_amt/500;
    r_amt=t_amt-(500*n500);

    n100=r_amt/100;
    r_amt=r_amt-(100*n100);

    n50=r_amt/50;
    r_amt=r_amt-(50*n50);

    n20=r_amt/20;
    r_amt=r_amt-(20*n20);

    n10=r_amt/10;
    r_amt=r_amt-(10*n10);

    n5=r_amt/5;
    r_amt=r_amt-(5*n5);

    n2=r_amt/2;
    r_amt=r_amt-(2*n2);

    n1=r_amt/1;
    r_amt=r_amt-(1*n1);

    printf("500 = %d\n", n500);
    printf("100 = %d\n", n100);
    printf("50 = %d\n", n50);
    printf("20 = %d\n", n20);
    printf("10 = %d\n", n10);
    printf("5 = %d\n", n5);
    printf("2 = %d\n", n2);
    printf("1 = %d\n", n1);
    return 0;
}