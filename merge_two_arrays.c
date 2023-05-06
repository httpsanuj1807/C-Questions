#include<stdio.h>

int main(){
    int n,m;
    
    scanf("%d", &n);
    int arr1[n];
    
    for(int i=0 ; i< n ; i++){
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &m);
     int arr2[m];
    
    for(int i=0 ; i< m ; i++){
        scanf("%d", &arr2[i]);
    }
    int q=0;
    int newarr[n+m];
    for(int i=0 ; i<(n+m); i++){
        if(i<n){
            newarr[i]=arr1[i];
        }
        else{
            newarr[i]=arr2[q];
            q++;
        }
    }

    // sorting

    for(int i=0 ; i<((n+m)-1) ; i++){
        for(int j=i ; j<(n+m) ; j++){
            if(newarr[j]<newarr[i]){
                int temp=newarr[j];
                newarr[j]=newarr[i];
                newarr[i]=temp;
            }
        }
    } 

    for(int i=0 ; i<(n+m) ; i++){
        printf("%d ", newarr[i]);
    }

    return 0;
}