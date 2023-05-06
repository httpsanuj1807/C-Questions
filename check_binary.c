#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int flag=0;
    while(n>0){
        int ld=n%10;
        if(ld==0 || ld==1){
            n=n/10;
            
        }
        else{
            flag=1;
            break;

        }
    }
    if(flag==0){
        printf("YES");
    }
    else{
        printf("No");
    }
    return 0;
}