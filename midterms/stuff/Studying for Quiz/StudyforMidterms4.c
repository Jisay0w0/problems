#include <stdio.h>
#include <math.h>

int main()
{
    int n = 500;
    int sum = 0;

    for (int i = 6; i <= n; i++)
    {
        sum = 0;
        // int j = 1;
        // while (j <= i)
        // {
        //     if (i % j == 0)
        //     {
        //         sum = sum + j;
        //     }
        //     j++;
        // }

        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum = sum + j;
            }
        }
        //printf("sum = %d i = %d\n", sum, i);
        if (sum == i)
        {
            printf("%d ", i);
            
        }
        else
        {
            
            continue;
        }
        }
}
