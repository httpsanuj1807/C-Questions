#include<stdio.h>
int main(){
    int n,m;
    scanf("%d" "%d", &n,&m);
    int i,j;
    int arr[n][m];
    for(i=0 ; i<n ; i++){
        for(j=0 ; j<m ; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(i=0 ; i<m ; i++){
        int sum=0;
        for(j=0 ; j<n ; j++){
            sum=sum+arr[j][i];
            
        }
        printf("%d ", sum );
    }
    
    return 0;
}