
#include<stdio.h>

int main(){
    int country,target,medal;
    scanf("%d %d %d", &country,&target,&medal);
    int size=country*3;
    int arr21[size];
    int arr22[size];
    for(int i=0 ; i<size ; i++){
        scanf("%d", &arr21[i]);
    }
    for(int i=0 ; i<size ; i++){
        scanf("%d", &arr22[i]);
    }

    int sumarr[size];
    for(int i=0 ; i<size ; i++){
        sumarr[i]=arr21[i]+arr22[i];
    }
    int res=0;

    for(int i=1 ; i<=target ; i++){
        for(int j=1; j<=3 ; j++){
            if(i<target){
                res++;
            }
            else{
                if(j!=medal){
                    res++;
                }
                else{
                    printf("%d", sumarr[res]);
                }
            }

        }
    }
    return 0;
}

