#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    float result=0;
    for(int i=1 ; i<=n ; i++){
        float p=i;
        if(i%2!=0){
            result=result+(1/p);
        }
        else{
            result=result-(1/p);
        }
    }
    printf("%.4f", result);
    return 0;
}