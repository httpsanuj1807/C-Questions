#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int size=5;
        int arr[size][size];
        for(int i=0 ; i<size ; i++){
            for(int j=0 ; j<size ; j++){
                scanf("%d", &arr[i][j]);
            }
        }
        //lower half
        int loop=size-1;
        int flag1=0;
        for(int i=0 ; i<size ; i++){
            int c=0;
            int r=i;
            for(int j=1 ; j<=(loop) ; j++){
                if(arr[r][c]==arr[r+1][c+1]){
                    r++;
                    c++;
                    continue;
                }
                else{
                    flag1=1;
                    break;
                }
                
            }
            loop--;
        }
        //upper half
        int loop2=size-2;
        int flag2=0;
        for(int i=1 ; i<size ; i++){
            int c=i;
            int r=0;
            for(int j=1 ; j<=(loop2) ; j++){
                if(arr[r][c]==arr[r+1][c+1]){
                    r++;
                    c++;
                    continue;
                }
                else{
                    flag2=1;
                    break;
                }
                
            }
            loop2--;
        }
        if((flag1 && flag2)==0){
            printf("TRUE");
        }
        else{
            printf("FALSE");
        }
    }
    return 0;
}


