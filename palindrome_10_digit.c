#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long n;
        scanf("%lld", &n);
        int count=0;
        long long save=n;
        while(save>0){
            count++;
            save=save/10;
        }
        save=n;
        // printf("%d", count);
        if(count==10){
            int sum=0;
            while(save>0){
                int ld=save%10;
                sum=sum+ld;
                save=save/10;
            }
            int save1=sum;
            int rev=0;
            while(save1>0){
                int ld1=save1%10;
                rev=(rev*10)+ld1;
                save1=save1/10;
            }
            if(rev==sum){
                printf("%d, Number is palindrome\n",sum);
            }
            else{
                printf("%d, Number is not palindrome\n",sum);
            }
            
        }
        else{
            printf("Invalid Number\n");
        }

    }
    return 0;
}