// 5 2 2 3 4 2 1 1
// 5 2 3 4 1
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
     int flag[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        flag[i] = -1;
    }

   
    

    for(int i=0 ; i<n ; i++){
        int count=1;

        for(int j=i+1 ; j<n ; j++){
            if(arr[i]==arr[j]){
                count++;
            flag[j]=0;
            }
            
        }

        if(flag[i]!=0){
            flag[i]=count;
        }


        
    }
    int count=0;
    for(int i=0 ; i<n ; i++){
        if(flag[i]>1){
            count++;
        }
    }
    printf("%d", count);

  

    return 0;
}