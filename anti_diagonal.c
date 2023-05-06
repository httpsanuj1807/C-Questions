#include<stdio.h>
int main(){
    int n,target;
    scanf("%d%d", &n,&target);
    int i,j;
    int arr[n][n];
    for(i=0 ; i<n ; i++){
        for(j=0 ; j<n ; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int p=target;
    for(i=0 ; i<=p ; i++){
       
        printf("%d ", arr[i][target]);
        target=target-1;
        
    }
    return 0;
}