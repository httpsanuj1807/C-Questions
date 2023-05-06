#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d", &arr[i]);
    }
    int newarr[n];
    for(int i=0 ; i<n ; i++){
        newarr[i]=arr[i];

    }
    for(int i=0 ; i<n ; i++){
        printf("%d ", newarr[i]);
    }

    return 0;
}