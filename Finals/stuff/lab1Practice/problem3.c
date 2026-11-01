#include <stdio.h>
// rotate right by k

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int ans[5] = {};
    int k = 2;
    int n = 5;
    int end = 4;
    int temp;

    

    for (int i = 0, temp = n - k; i <= k; i++, temp++)
    {
        ans[i] = arr[temp];
        // printf("%d \n", ans[i]);
        // printf("%d %d %d %d\n", i, temp, n, k );
    }

    for (int i = k, temp = 0; i <= end; i++, temp++)
    {
        ans[i] = arr[temp];
    }

    // for (int i = 0, j = end + 1 - k; i <= end && j <= end; j++, i++)
    // {
    //         int n = arr[j];
    //         ans[i] = n;
    //         printf("%d ", n);
    //     // for (int j = ; j <= )
    // }

    for (int i = 0; i <= end; i++)
    {
        printf("%d ", ans[i]);
    }
}