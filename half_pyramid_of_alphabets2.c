#include<stdio.h>

int main(){
    char c;
    scanf("%c", &c);
    int loop=1;
    // int A='A';
    
    for(int i='A' ; i<=c ; i++){
        int letter='A';
        for(int j=1; j<=loop ; j++){

            if(j<loop){
                printf("%c ", letter);
                letter++;
            }
            else{
                printf("%c",letter);
                letter++;
            }
            
        }
        loop++;
        printf("\n");
    }
    return 0;
}