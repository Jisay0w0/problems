#include <stdio.h>

// checks how many prime number there are

#define ROW 5
#define COL 5

int main()
{
    int arr[ROW][COL] =
        {{2, 3, 4, 5, 6},
         {7, 8, 9, 10, 11},
         {12, 13, 14, 15, 16},
         {17, 18, 19, 20, 21},
         {22, 23, 24, 25, 26}};

    int count = 0;

    for (int i = 0; i < ROW; i++)
    {

        for (int j = 0; j < COL; j++)
        {
            int flag = 1;
            int num = arr[i][j];

            for (int divisor = 2; divisor <= num / 2; divisor++)
            {
                if (num % divisor == 0)
                {
                    flag = 0;
                    break;
                }
            }

            // printf("arr[%d][%d]\n", i, j);
            if (flag == 1)
            {
                count++;
                printf("%d is a prime\n", arr[i][j]);
            }
        }
    }
}