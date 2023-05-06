#include <stdio.h>

int main()
{
    int t = 5;
    while (t--)
    {
        int n;
        printf("Enter the number of elements: ");
        scanf("%d", &n);
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int flag[n];
        for (int i = 0; i < n; i++)
        {
            flag[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            if (flag[i] == 0)
            {
                int count = 0;
                for (int j = 0; j < n; j++)
                {
                    if (arr[i] == arr[j])
                    {
                        flag[j] = 1;
                        count++;
                    }
                }
                printf("%d:%d\n", arr[i], count);
            }
        }
    }

    return 0;
}