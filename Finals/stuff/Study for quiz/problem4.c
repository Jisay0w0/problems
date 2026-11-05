#include <stdio.h>
// Search a row-and-column-sorted matrix

#define row 5
#define col 5

int main()
{
    int arr[row][col] = {{1, 2, 3, 4, 5},
                         {6, 7, 8, 9, 10},
                         {11, 12, 13, 14, 15},
                         {16, 17, 11, 19, 20},
                         {21, 22, 23, 24, 25}};
    int input = 0;
    int flag = 0;
    int otherFlag = 1;
    scanf("%d", &input);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (input == arr[i][j] && flag == 0)
            {
                printf("the number is found at row %d and col %d", i + 1, j + 1);
                flag = 1;
                otherFlag = 0;
            }
            else if (input == arr[i][j] && flag == 1)
            {
                printf("and at row %d and col %d", i + 1, j + 1);
            }
        }
    }

    if (otherFlag)
    {
        printf("not found");
    }
}