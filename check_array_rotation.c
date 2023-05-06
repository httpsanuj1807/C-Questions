#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int i;
    for( i=0 ; i<n ; i++){
        scanf("%d", &arr[i]);
    }
    int j;
    int flag=1;
    for(j=0 ; j<n ; j++){
        if(arr[j]>arr[j+1]){
            flag=0;
            printf("%d",j+1 );
            break;
        }
        else{
            flag=1;
        }
    }
    if(flag==1){
        printf("0");
    }
    return 0;
}