#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        
        int first=0;
        int second=1;
        scanf("%d", &n);
        if(n==0){
            printf("TRUE\n");
        }
        else if(n==1){
            printf("TRUE\n");
        }
        
        else{
            int flag=0; ////not fibb

            for(int i=1 ; i<=n ; i++){
                int curr=first+second;
                if(curr==n){
                    
                    flag=1;
                    break;
                }
                else{
                    first=second;
                    second=curr;    
                }
                


            }
            if(flag==0){
                printf("FALSE\n");
            }
            else{
                printf("TRUE\n");
            }
        }

    }
    return 0;
}