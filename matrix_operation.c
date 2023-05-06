#include<stdio.h>
int main(){
    int r,c;
    scanf("%d%d", &r,&c);
    int i,j;
    int arr[r][c];
    for(i=0 ; i<r ; i++){
        for(j=0 ; j<c ; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int target=0;
    for(i=0 ; i<r ; i++){
        for(j=0 ; j<c ; j++){
            if(arr[i][j]==0){
                target=i;
                break;
            }
            
        }
    }
    
    for(j=0 ; j<c ; j++){
        arr[target][j]=0;
    }
    for(i=0 ; i<r ; i++){
        for(j=0 ; j<c ; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    
    

    
    return 0;
}