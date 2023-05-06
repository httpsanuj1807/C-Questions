// #include<stdio.h>

// int main(){
//     int n,exp=0,actu=0;
//     scanf("%d", &n);
//     int arr[n-1];
//     for(int i=0 ; i<n-1 ; i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=1 ; i<=n ; i++){
//         exp=exp+i;
//     }
//     for(int i=0 ; i<n-1 ; i++){
//         actu=actu+arr[i];
//     }
//     printf("%d", exp-actu);

//     return 0;
// }

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        int flag = 0; // not present
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] == i)
            {
                flag = 1; // present
            }
        }
        if (flag == 0)
        {
            printf("%d", i);
            break;
        }
    }


return 0;
}