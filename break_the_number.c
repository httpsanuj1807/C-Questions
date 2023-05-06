#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int rev=0;
        while (num > 0)
        {
            int last = num % 10;
            rev=(rev*10)+last;
            num = num / 10;
        }

        while(rev>0){
            int last_again=rev%10;
            printf("%d ",last_again );
            rev=rev/10;
        }
    }

    return 0;
}

