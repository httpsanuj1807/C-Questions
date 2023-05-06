#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    for(int i=0 ; i<n ; i++){
        scanf("%d", &arr[i]);
    }
printf("The before array is:\n");
for(int i=0 ; i<n ; i++){
        printf("%d ",arr[i]);

}
printf("\n");

printf("Enter the element to be inserted: ");
scanf("%d", &arr[n]); 

int new_size=n+1;
printf("The after array is:\n");
for(int i=0 ; i<new_size ; i++){
        printf("%d ",arr[i]);

}

    return 0;
}