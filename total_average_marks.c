#include <stdio.h>

void prime(int n);

int main()
{
    int t = 6;
    while (t--)
    {
        int arr[5];

        for (int i = 0; i < 5; i++)
        {
            scanf("%d", &arr[i]);
        }
        int total = 0;
        for (int i = 0; i < 5; i++)
        {
            total = total + arr[i];
        }
        printf("Total:%d\n", total);
        int average = (total / 5);
        printf("Average:%d\n", average);
        prime(average);

        
    }
    
    
return 0;
}
void prime(int n)
{
    if (n == 1)
    {
        printf("%d is not a prime number\n", n);
    }
    else
    {
        int flag = 0; // prime
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                flag = 1; // not prime
                break;
            }
            else
            {
                continue;
            }
        }
        if (flag == 0)
        {
            printf("%d is a prime number\n", n);
        }
        else if (flag == 1)
        {
            printf("%d is not a prime number\n", n);
        }
    }
}
