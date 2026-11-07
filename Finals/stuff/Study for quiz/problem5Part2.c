#include <stdio.h>

//display the array in spiral

#define ROW 5
#define COL 5

int main()
{
    int arr[ROW][COL] = {{1,  2,  3,  4,  5},
                         {6,  7,  8,  9,  10},
                         {11, 12, 13, 14, 15},
                         {16, 17, 18, 19, 20},
                         {21, 22, 23, 24, 25}};

    int up = 0, right = COL - 1;
    int left = 0, down = ROW - 1;

    for (; up <= right && left <= down;)
    {
        for (int i = left; i <= right; i++)
        {
            printf("%d ", arr[up][i]);
        }
        up++;

        for (int i = up; i <= down; i++)
        {
            printf("%d ", arr[i][right]);
        }
        right--;

        for (int i = right; i >= left; i--)
        {
            printf("%d ", arr[down][i]);
        }
        down--;

        for (int i = down; i >= up; i--)
        {
            printf("%d ", arr[i][left]);
        }
        left++;
    }
}