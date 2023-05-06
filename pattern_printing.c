#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int i;
        for(i=1 ; i<=n ; i++){
            int j;
            for(j=1 ; j<=n-i ; j++){
                printf(" ");
            }
            int k=i;
            for(j=1 ; j<=i ; j++){
                printf("%d", k);
                k++;
            }
            k=k-2;
            for(j=1 ; j<i ; j++){
                printf("%d", k);
                k--;
            }
            printf("\n");
        }
    }
    return 0;
}