#include <stdio.h>
void fib(int n);

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    fib(n);

    return 0;
}

void fib(int n)
{

    int first = 0;
    int second = 1;
    int current = first + second;
    if (n == 1)
    {
        printf("%d", first);
    }
    else if (n == 2)
    {
        printf("%d %d", first, second);
    }
    else
    {
        printf("%d %d", first, second);
        printf(" ");
        for (int i = 3; i<=n; i++)
        {
            current = first + second;
            printf("%d ", current);
            first = second;
            second = current;
        }
    }
}