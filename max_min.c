#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int m;
    scanf("%d", &m);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d", &arr[i]);
    }

    
    

    if(m==1){
        int min=arr[0];
        for(int i=0 ; i<n ; i++){
            if(arr[i]<min){
                min=arr[i];
            }
        }
        printf("%d", min);


    }
    else{
        int max=arr[0];
        for(int i=0 ; i<n ; i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        printf("%d", max);

    }
    return 0;
}