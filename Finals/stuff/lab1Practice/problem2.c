#include <stdio.h>
// find the second largest in the array

int main()
{
    int arr[4] = {4, 9, 2, 7};
    int largest = 0, second = 0, n = 0;

    for (int i = 0; i <= 3; i++)
    {
        n = arr[i];
        if (n > largest)
        {
            largest = n;
        }
    }
    for (int i = 0; i <= 3; i++)
    {
        n = arr[i];
        if (n > second && n < largest)
        {
            second = n;
        }
    }
    printf("%d", second);
}