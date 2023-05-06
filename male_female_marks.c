#include<stdio.h>

int main(){
    int t=4;
    while(t--){int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d", &arr[i]);
    }
    int g;
    scanf("%d", &g);
    int result=0;
    if(g==1){
        for(int i=0 ; i<n ; i=i+2){
            result=result+arr[i];
        }
    }
    else{
        for(int i=1 ; i<n ; i=i+2){
            result=result+arr[i];
        }
    }
    printf("%d", result);}



    return 0;
}