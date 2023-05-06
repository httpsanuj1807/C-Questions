#include<stdio.h>

int main(){
    int n,target;
    scanf("%d %d", &n,&target);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int result=0;
    for(int i=0 ; i<(n-1) ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(target==arr[i]+arr[j]){
                result++;
            }
        }
    }
    printf("%d", result);


    return 0;
}