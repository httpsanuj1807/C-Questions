#include<stdio.h>

int main(){
    int n;
    printf("Enter the no of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int max=0;
    for(int i=0 ; i<n ; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int count=0;
    for(int i=0 ; i<n ; i++){
        if(arr[i]==max){
            count++;
        }
    }
    printf("%d %d", max, count);
    





    return 0;
}