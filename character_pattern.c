#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    // printf("%d", c);
    int pr = 1;
    int i;
    int j;
    for (i = 'A'; i <= c; i++)
    {
        int letter = i;
        for (j = 1; j <= pr; j++)
        {
            if (j < pr)
            {
                printf("%c ", letter);
            }
            else
            {
                printf("%c", letter);
            }
        }
        pr++;
        printf("\n");
    }
    return 0;
}