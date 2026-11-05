#include <stdio.h>

// printf the array in spiral

#define ROW 5
#define COL 5

int main()
{
    int arr[ROW][COL] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}};

    int row = 0, end, end2, end3, end4, end5, end6, limit = 0, rowLimit = 0, colLimit = 0;
    int loopLimit = (ROW % 3) + 1;

    // first

    for (int j = 0; j < COL; j++)
    {
        printf("%d ", arr[row][j]);
        end = j;
    }
    // printf("end = %d\n", end);

    printf("\n");
    // printf("end = %d\n", end);

    // second

    for (int i = 1; i < ROW; i++)
    {
        printf("%d ", arr[i][end]);
        // printf("row = %d col = %d\n", i, end);
        end2 = i;
    }

    // printf("end2 = %d\n", end2);

    // third

    printf("\n");

    for (int j = COL - 2; j >= limit; j--)
    {
        printf("%d ", arr[end2][j]);
        // printf("row = %d col = %d\n", end2, j);
        end3 = j;
    }

    // printf("end3 = %d\n", end3);

    // the other part

    for (; loopLimit > 0; loopLimit--)
    {
        printf("\n");
        if (loopLimit % 2 != 0)
        {
            rowLimit++;
            for (int i = end - 1; i >= rowLimit; i--)
            {
                printf("%d ", arr[i][end3]);
                // printf("row = %d col = %d\n", i, end3);
                end2 = i;
            }

            printf("\n");
            colLimit++;
            for (int j = colLimit; j < end; j++)
            {
                printf("%d ", arr[end2][j]);
                // printf("row = %d col = %d\n", end4, j);
                end3 = j;
            }

            // printf("end = %d end2 = %d end3 = %d\n", end, end2, end3);
            //  break;
            //  printf("rowLimit = %d colLimit = %d\n", rowLimit, colLimit);
        }
        else if (loopLimit % 2 == 0)
        {
            rowLimit++;
            for (int i = rowLimit; i < end; i++)
            {
                printf("%d ", arr[i][end3]);
                end2 = i;
            }
            printf("\n");
            colLimit++;
            for (int j = colLimit; j >= end - end3; j--)
            {
                printf("%d ", arr[end2][j]);
                end3 = j;
            }

            // colLimit++;
            // for (int j = rowLimit; j >= COL - 2; j++)
            // {
            //     printf("%d ", arr[end4][j]);
            //     printf("row = %d col = %d\n", end4, j);
            // }
        }
    }

    // {1,  2,  3,  4,  5},
    // {6,  7,  8,  9,  10},
    // {11, 12, 13, 14, 15},
    // {16, 17, 18, 19, 20},
    // {21, 22, 23, 24, 25}}
    // printf("\n");
    // limit++;

    // for (int i = ROW - 2; i >= limit; i--)
    // {
    //     printf("%d ", arr[i][end3]);
    // }

    // printf("\n");
}
