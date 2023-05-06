#include<stdio.h>

int main(){
    int r1,r2;
    printf("Enter the range 1: ");
    scanf("%d", &r1);
    printf("Enter the range 2: ");
    scanf("%d", &r2);

    for(int i=r1 ; i<=r2 ; i++){
        //int check=i;
        for(int j=1 ; j<i; j++){
            if(i==(j*j)){
                printf("%d ", i);
            }
        }
    }
    return 0;
}
