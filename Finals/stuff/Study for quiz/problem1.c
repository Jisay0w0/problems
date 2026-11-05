#include <stdio.h>
// flip the 2d array to the right
#define row 5
#define col 5

int main()
{
    int arr[row][col] = {{1, 2, 3, 4, 5},
                         {6, 7, 8, 9, 10},
                         {11, 12, 13, 14, 15},
                         {16, 17, 18, 19, 20},
                         {21, 22, 23, 24, 25}};

    int ans[row][col] = {{1, 2, 3, 4, 5},
                         {6, 7, 8, 9, 10},
                         {11, 12, 13, 14, 15},
                         {16, 17, 18, 19, 20},
                         {21, 22, 23, 24, 25}};

    int spin = 0;
    scanf("%d", &spin);
    printf("\n");
    
    spin = spin % 4;

    for (int limit = 1; limit <= spin; limit++)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                ans[j][col - 1 - i] = arr[i][j];
                // printf("%d ", ans[j][i]);
            }
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                arr[i][j] = ans[i][j];
            }
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