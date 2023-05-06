#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0 ; i<n ; i++){
            scanf("%d", &arr[i]);
        }
        int flagarr[n];
        for(int i=0 ; i<n ; i++){
            flagarr[i]=0;
        }

        for(int i=0 ; i<n ; i++){
            int count=1;
            if(flagarr[i]==0){
                for(int j=i+1 ; j<n ; j++){
                    if(arr[i]==arr[j]){
                        count++;
                        flagarr[j]=1;
                    }
                }

            }
            if(count!=1){
                printf("%d ",arr[i]);
                
            }
            
            
        }
    }
    return 0;
}