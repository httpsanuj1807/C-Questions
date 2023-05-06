#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // 1 2 2 3 4 2
    
    for (int i = 0; i < n; i++) {
          int flag = 1;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            else if (arr[i] == arr[j])
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            printf("%d ", arr[i]);
        }
        else
        {
            continue;
        }
    }

    return 0;
}