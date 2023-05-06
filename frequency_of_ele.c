// 5 2 2 3 4 2 1 1
// 5 2 3 4 1
#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    for(int i=0 ; i<n ; i++){
        scanf("%d", &arr[i]);
    }

    int flag[n];
    for(int i=0 ; i<n ; i++){
        flag[i]=0;
    }

    for(int i=0 ; i<n ; i++){
        if(flag[i]==0){

            int count=0;
            for(int j=0 ; j<n ; j++){
                if(arr[i]==arr[j]){
                    count++;
                }

            }
            printf("%d occurs %d times\n",arr[i], count);
            
            
            
            flag[i]=1;
            for(int j=i+1 ; j<n ; j++){
                if(arr[i]==arr[j]){
                    flag[j]=1;
                }
            }
        }
    }
    
    return 0;
}