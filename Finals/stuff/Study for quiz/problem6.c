#include <stdio.h>

// Rotate the array in-place

#define ROW 5
#define COL 5

int main()
{
    int arr[ROW][COL] = {{1, 2, 3, 4, 5},
                         {6, 7, 8, 9, 10},
                         {11, 12, 13, 14, 15},
                         {16, 17, 18, 19, 20},
                         {21, 22, 23, 24, 25}};

    int i = 0, j = 4, k = COL - 1, l = 0;

    for (int lim = 1; lim <= ROW; lim++, k--, l++, i++, j--)
    {
        for (int limit = i, iTemp = i, jTemp = j; limit < k; limit++, iTemp++, jTemp--)
        {

            int temp = arr[iTemp][k];
            arr[iTemp][k] = arr[l][iTemp];

            int temp2 = arr[k][jTemp];
            arr[k][jTemp] = temp;

            int temp3 = arr[jTemp][l];
            arr[jTemp][l] = temp2;

            arr[l][iTemp] = temp3;
        }
        
    }






    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

// printf("%d\n", arr[row][COL - 1]);
// printf("%d %d\n", row, COL - 1);
// printf("temp = %d", temp);