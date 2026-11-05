#include <stdio.h>
// mine sweeper where 1 is a mine

#define row 5
#define col 5

int main()
{
    int arr[row][col] = {{0, 0, 0, 0, 0},
                         {0, 0, 0, 0, 0},
                         {0, 1, 0, 1, 0},
                         {0, 0, 0, 0, 0},
                         {0, 0, 0, 0, 0}};
    int ans[row][col] = {};
    for (int i = 0; i < row; i++)
    {
        int count = 0;
        for (int j = 0; j < col; j++)
        {
            if (arr[i + 1][j] != 0 && i != col - 1)
            {
                // printf("i + 1 = %d\n", arr[i + 1][j]);
                count++;
            }
            if (arr[i - 1][j] != 0 && i != 0)
            {
                count++;
                // printf("i - 1 = %d\n", arr[i - 1][j]);
            }
            if (arr[i][j + 1] != 0 && j != col - 1)
            {
                count++;
                // printf("j + 1 = %d\n", arr[i][j + 1]);
            }
            if (arr[i][j - 1] != 0 && j != 0)
            {
                count++;
                // printf("j - 1 = %d\n", arr[i][j - 1]);
            }
            if (arr[i + 1][j + 1] != 0 && i != col - 1 && j != col - 1)
            {
                count++;
                // printf("i + 1/j + 1 = %d\n", arr[i + 1][j + 1]);
            }
            if (arr[i + 1][j - 1] != 0 && i != col - 1 && j != 0)
            {
                count++;
                // printf("i + 1/j - 1 = %d\n", arr[i + 1][j - 1]);
            }
            if (arr[i - 1][j + 1] != 0 && i != 0 && j != col - 1)
            {
                count++;
                // printf("i - 1/j + 1 = %d\n", arr[i - 1][j + 1]);
                // printf("arr[%d][%d]\n", i, j);
            }
            if (arr[i - 1][j - 1] != 0 && i != 0 && j != 0)
            {
                count++;
                // printf("i - 1/j - 1 = %d\n", arr[i - 1][j - 1]);
            }
            ans[i][j] = count;
            count = 0;
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
}