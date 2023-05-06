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
int place,ele;
printf("Enter the element to be inserted and its place: ");
scanf("%d %d", &ele,&place); 
int new_size=n+1;

for(int i=new_size-1 ; i>=place ; i-- ){
    arr[i]=arr[i-1];   
}
arr[place-1]=ele;

for(int i=0 ; i<new_size ; i++){
        printf("%d ",arr[i]);
}
    return 0;
}
