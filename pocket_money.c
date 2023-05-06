#include<stdio.h>

void swap_numbers(int arr[]);

int main(){
    int arr[3];
    for(int i=0 ; i<3 ; i++){
        scanf("%d", &arr[i]);
    }
    swap_numbers(arr);
    for(int i=0 ; i<3 ; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
void swap_numbers(int arr[]){
        int temp;
        temp=*(arr);
        *arr=*(arr+2);
        *(arr+2)=*(arr+1);
        *(arr+1)=temp;
}