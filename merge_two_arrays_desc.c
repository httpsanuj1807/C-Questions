// Write a program in c to merge two arrays sorted in descending order
// input type: 3                                                                                                                 input first array: 1 2 3                                                                                                        input second array: 1 2 3                                                                                                     merged array: 3 3 2 2 1 1


#include<stdio.h>

int main(){
    int n,m;
    //first array
    printf("Enter the elements in arr1: ");
    scanf("%d", &n);
    int arr1[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d", &arr1[i]);
    }
    //second array
    printf("Enter the elements in arr2: ");
    scanf("%d", &m);
    int arr2[m];
    for(int i=0 ; i<m ; i++){
        scanf("%d", &arr2[i]);
    }

    int new_size=n+m;
    int sortarr[new_size];
    
    int p=0;

    //merging both arrays
    for(int i=0 ; i<new_size ; i++){
        if(i<=(n-1)){
            sortarr[i]=arr1[i];    
        }
        else{
            sortarr[i]=arr2[p];
            p++;

        }
    }

    //sorting in descending order using selection sort
    for(int q=0 ; q<new_size-1 ; q++){
        for(int y=q+1 ; y<new_size ; y++){
            if(sortarr[y]<sortarr[q]){
                int temp;
                temp=sortarr[y];
                sortarr[y]=sortarr[q];
                sortarr[q]=temp;
            }
        }
    }

    //printing in reverse order

    for(int i=new_size-1 ; i>=0 ; i--){
        printf("%d ", sortarr[i]);
    }

    return 0;
}