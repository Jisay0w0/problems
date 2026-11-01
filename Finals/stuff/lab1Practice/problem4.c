#include <stdio.h>

// organize the array and get rid of repeating numbers

int main()
{
    int arr[] = {5, 2, 8, 1, 3, 3, 5, 3};
    int n = 8;

    for (int i = 0; i < n - 1; i++)
    {
        // printf("i = %d\n", i);
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            // printf("j = %d\n", j);
        }
        // printf("\n");
    }

    int ans[] = {0};
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        printf("n = %d\n", n);
        if (i > k)
        {
            break;
        }
        else if (arr[i] == arr[i + 1])
        {
            continue;
        }
        else
        {
            printf("arr[i] = %d\n", arr[i]);
            ans[k] = arr[i];
            k++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ans[i]);
    }
}