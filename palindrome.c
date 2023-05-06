#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int save=n;
    int count=0;
    while(save>0){
        save=save/10;
        count++;
    }
    save=n;
    int rev=0;
    while(save>0){
        int ld;
        ld=save%10;
        rev=(rev*10)+ld;
        save=save/10;
    }
    if(n==rev){
        printf("%d Palindrome", n);
    }
    else{
        printf("%d Not Palindrome",n);
    }
    return 0;
}