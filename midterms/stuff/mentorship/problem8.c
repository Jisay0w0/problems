#include <stdio.h>
// Goldbach’s conjecture count
int main()
{

    int n = 28;
    int sum = 0;

    for (int i = 2; i <= n; i++)
    {
        int flag = 1;
        int flag2 = 1;
        int j = 2;
        int k = 2;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
            }
        }
        
        for (int temp = 2; temp <= n / 2; temp++)
        {
            for (k = 2; k < temp; k++)
            {
                if (i % k == 0)
                {
                    flag2 = 0;
                }
            }
            if (flag == 1 && flag2 == 1 && j + k == n)
            {
                printf("%d + %d = %d\n", j, k, j + k);
                sum++;
            }
        }

        // if (flag == 1)
        // {
        //     printf("%d is a prime\n", i);
        // }
    }
    printf("%d", sum);
}