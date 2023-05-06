#include<stdio.h>

int main(){
     int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    for(int i=0 ; i<n ; i++){
        scanf("%d", &arr[i]);
    }
    for(int q=0 ; q<n-1 ; q++){
        for(int y=q+1 ; y<n ; y++){
            if(arr[y]<arr[q]){
                int temp;
                temp=arr[y];
                arr[y]=arr[q];
                arr[q]=temp;
            }
        }
    }
    printf("Maximum ele is %d\n",arr[n-1]);
    printf("Minimum ele is %d\n",arr[0]);
    return 0;
}