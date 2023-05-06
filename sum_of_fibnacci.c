#include<stdio.h>

int main(){
    int t=7;
    while(t--){
        int n;
    scanf("%d",&n);
    int first=0;
    int second=1;
    if(n==1){
        printf("%d\n", first);
    }
    else if(n==2){
        printf("%d\n", first+second);
    }
    
    else{
        int sum=1;
        first=0;
        second=1;
       
        for(int i=3 ; i<=n ; i++){
            int current=first+second;
            sum=sum+current;
            first=second;
            second=current;
        }
        printf("%d\n", sum);
    }
    }


    return 0;
}