#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i=1; i<=n ; i++){
        int save=i;
        int save2=i;
       
        
        float arm=0;
        while(save2>0){
            int ld=save2%10;
            arm=arm+(pow(ld,3));
            save2=save2/10;
        }
        if(arm==i){
            printf("%d ", i);
        }

    }
    return 0;
}