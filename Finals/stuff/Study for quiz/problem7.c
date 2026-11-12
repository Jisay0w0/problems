#include <stdio.h>

// Given a binary matrix, find the area of the largest square containing only 1s.

#define ROW 10
#define COL 10

int main()
{
    int arr[ROW][COL] = {{1, 0, 1, 1, 1, 1, 0, 1, 1, 0},
                         {1, 0, 1, 0, 0, 1, 0, 1, 0, 0},
                         {1, 0, 1, 1, 1, 1, 0, 1, 1, 0},
                         {1, 0, 1, 1, 1, 1, 0, 0, 0, 1},
                         {1, 0, 1, 1, 1, 1, 0, 1, 0, 1},
                         {1, 0, 0, 0, 0, 1, 0, 1, 1, 0},
                         {1, 0, 1, 0, 0, 1, 0, 1, 0, 0},
                         {1, 0, 1, 1, 1, 0, 1, 1, 1, 0},
                         {1, 0, 1, 0, 1, 0, 1, 0, 0, 1},
                         {1, 0, 1, 1, 1, 0, 1, 1, 0, 1}};

    int largest = 0;
    for (int i = 0; i < ROW; i++)
    {
        int count = 0;
        for (int j = 0; j < COL; j++)
        {

            int iTemp = i, jTemp = j;
            for (int add = 1; arr[iTemp][jTemp + add] == 1 && arr[iTemp + add][jTemp + add] == 1 && arr[iTemp][jTemp] == 1; add++, count++)
            {

                if (i == 9 || j == 9)
                {
                    continue;
                }
            }
        }
        if (count > largest)
        {
            largest = count;
        }
    }

    printf("%d", largest);
}
