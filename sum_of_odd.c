#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    printf("The odd numbers are: ");
    int sum=0;
    int p=1;
    for(int j=1 ; j<=n ; j++){
       sum=sum+p;
       printf("%d ", p);
       p=p+2;
       
    }
    printf("\n");
    
    printf("The sum of odd number upto %d terms: %d", n,sum);
    return 0;
}

