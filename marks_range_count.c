#include<stdio.h>

int main(){
    int n,c1=0,c2=0,c3=0,c4=0,c5=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]>=0 && arr[i]<=39){
            c1++;
        }
        else if(arr[i]>=40 && arr[i]<=49){
            c2++;
        }
        else if(arr[i]>=50 && arr[i]<=59){
            c3++;
        }
        else if(arr[i]>=60 && arr[i]<=79){
            c4++;
        }
        else if(arr[i]>=80 && arr[i]<=100){
            c5++;
        }
        
    }
    printf("1 %d\n", c1);
    printf("2 %d\n", c2);
    printf("3 %d\n", c3);
    printf("4 %d\n", c4);
    printf("5 %d\n", c5);
    return 0;
}