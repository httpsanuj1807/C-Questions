#include<stdio.h>

int main(){
     int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    for(int i=0 ; i<n ; i++){
        scanf("%d", &arr[i]);
    }

    int place;
    printf("Enter the place to delete: ");
    scanf("%d", &place);

    int new_size=n-1;

    for(int i=place ; i<=new_size ; i++){
        arr[i-1]=arr[i];
    }

    for(int i=0 ; i<new_size ; i++){
        printf("%d ", arr[i]);
    }



    return 0;
}