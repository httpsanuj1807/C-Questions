#include<stdio.h>
#include<math.h>

int main(){
    int bin;
    printf("Enter the binary number: ");
    scanf("%d", &bin);
    int result=0;
    int i=0;
    while(bin>0){
            int ld=bin%10;
            if(ld==1){
                result=result+(pow(2,i));
            }
            bin=bin/10;
            i++;
    }
    printf("The decimal number is: %d", result);
    return 0;
}
// 101101

