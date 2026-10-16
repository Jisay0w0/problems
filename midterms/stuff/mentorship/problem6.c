#include <stdio.h>
#include <math.h>
// read and print the largest prime factor
int main()
{
    int n = 9973;
    int flag = 1;
    int largest = 0;

    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            if (n % i == 0)
            {
                if (i > largest)
                {
                    largest = i;
                }
            }

            //printf("%d is a prime\n", i);
            flag = 1;
        }
        else
        {
            flag = 1;
        }
    }
    printf("largest = %d", largest);
}
