#include<stdio.h>

int main(){
    int t=5,result=0;
    while(t--){
        int sum=0;
        int pre,curr;
        scanf("%d %d", &pre,&curr);
        int unit=curr-pre;
        if(unit>=0 && unit<=200){
            sum=sum+0;
        }
        else if(unit>200 && unit<=300){
            sum=sum+(unit*3);
        }
        else if(unit>300 && unit<=500){
            sum=sum+((unit-300)*5)+900;
        }
        else if(unit>500){
            sum=sum+((unit-500)*7)+1900;
        }
        printf("%d\n",sum);
        result=result+sum;
        


    }
    printf("Total amount paid: %d",result);

    return 0;
}