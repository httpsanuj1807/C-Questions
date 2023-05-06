#include<stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d", &arr[i]);
    }
    int earr[n], e=0;
    int oarr[n], o=0;

    for(int i=0 ; i<n ; i++){
        if(arr[i]%2==0){
            earr[e]=arr[i];
            e++;
        }
        else{
            oarr[o]=arr[i];
            o++;
        }
    }
    for(int i=0 ; i<e ; i++){
        printf("%d ", earr[i]);
    }
    printf("\n");
    for(int i=0 ; i<o ; i++){
        printf("%d ", oarr[i]);
    }
    return 0;
}