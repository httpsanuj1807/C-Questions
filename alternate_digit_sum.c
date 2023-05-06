#include<stdio.h>

int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    int count=0;
    int save=n;
    while(save>0){
        save=save/10;
        count++;
    }
    save=n;
int result=0;
    if(count%2==0){
        for(int i=1 ; i<n ; i++){
            int ld=save%10;
            if(i%2!=0){
                result=result-ld;
            }
            else{

                result=result+ld;
            }
            save=save/10;

        }
    }
    else{
        for(int i=1 ; i<n ; i++){
            int ld=save%10;
            if(i%2!=0){ 
                result=result+ld;
            }
            else{
                result=result-ld;
            }
            save=save/10;
        }
    }
    printf("%d", result);
    return 0;
}

// 5 minutes