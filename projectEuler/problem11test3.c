#include <stdio.h>

int main()
{
    int arr[6][6] = {
        {0, 1, 2, 3, 4, 5},
        {10, 21, 32, 43, 54, 65},
        {20, 31, 42, 53, 64, 75},
        {30, 41, 52, 63, 74, 85},
        {40, 51, 62, 73, 84, 95},
        {50, 61, 72, 83, 94, 105}};

    int i = 0;
    int j = 0;
    int num = 0;
    int temp = 0;

    for (int limit = 1; limit <= 6; limit++)
    {
        i = temp;
        while (i <= limit + 3)
        {

            num = arr[i][j];
            printf("arr = %d\n", num);
            i++;
            j++;
        }
        printf("==================================================\n");
        temp++;
        j = 0;
    }
}