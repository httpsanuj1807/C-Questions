#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d", &arr[i]);
    }

   

   for(int i=0 ; i<n-1 ; i++){
    for(int j=i+1 ; j<n ; j++){
        if(arr[j]<arr[i]){
            int temp;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
   }
   printf("%d %d", arr[n-1], arr[0]);
    return 0;
}