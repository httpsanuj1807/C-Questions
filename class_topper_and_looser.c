#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int i,j;
    for(i=0 ; i<n ; i++){
        scanf("%d", &arr[i]);
    }

    //sorting array using selection sort

    for(i=0 ; i<n-1 ; i++){
        for(j=i ; j<n ; j++){
            if(arr[j]<arr[i]){
                int temp;
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }

        }
    }
int last_two=arr[n-2];

int first_two=arr[1];

int result=last_two-first_two;
printf("%d", result);



    return 0;
}
