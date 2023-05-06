#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    char arr[n][100];
    getchar();
    for(int i=0 ; i<n ; i++){
        fgets(arr[i], 100 ,stdin);
    }
    for(int i=0 ; i<(n-1) ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(strcmp(arr[j],arr[i])<0){
                char temp[100];
                strcpy(temp,arr[j]);
                strcpy(arr[j],arr[i]);
                strcpy(arr[i],temp);
                
            }
        }
    }
    printf("\n");
    printf("The sorted array is:\n");
    for(int i=0 ; i<n ; i++){
        printf("%s", arr[i]);
    }
    return 0;
}