#include <stdio.h>
// reverse the array

int main()
{
    int arr[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int temp = 0;

    for (int start = 0, end = 14; start <= end; start++, end--)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        // printf(".");
    }

    for (int i = 0; i <= 14; i++)
    {
        printf("%d ", arr[i]);
    }
}