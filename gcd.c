#include<stdio.h>

int main(){
    int n,m;
    scanf("%d %d", &n,&m);
    int sml;
    if(n<=m){
        sml=n;
    }
    else{
        sml=m;
    }
    int result=1;
    for(int i=1 ; i<=sml ; i++){
        if(n%i==0 && m%i==0){
            result=i;
        }
        
    }
    printf("The gcd of both number is %d", result);
    return 0;
}