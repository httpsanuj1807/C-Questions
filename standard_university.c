#include <stdio.h>

int main()
{
    int size = 7;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    
    int swp;
    for (int i = 1; i <= size; i++)
    {   int target = i;
        for (int j = 0; j < size; j++)
        {
            if (target == arr[j])
            {
                printf("%d ", j);
                swp = j;
                
            }
        }
        for (int i = swp; i<(size-1); i++)
        {   int temp=arr[i];
            arr[i] = arr[i + 1];
            arr[i+1]=temp;
        }
        
        
    }

    return 0;
}