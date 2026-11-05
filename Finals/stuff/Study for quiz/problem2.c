#include <stdio.h>
// turn columns into rows
#define row 2
#define col 5

int main()
{
    int arr[row][col] = {{1, 2, 3, 4, 5},
                         {6, 7, 8, 9, 10}};
    int ans[col][row] = {};

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            ans[i][j] = arr[j][i];
            // printf("ans[%d][%d] arr[%d][%d]\n", i, j, j, i);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
}