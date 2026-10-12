#include <stdio.h>

// A positive integer is square-free if it is not divisible by any perfect square greater than 1 (such as 4, 9, 16, etc.). How many square-free integers exist between 1 and 200 (inclusive)?

int main()
{
    int square;
    int divisor;
    int limit = 100;
    int n = 1;
    int counter = 0;

    while (n <= limit) // counts from 1 to 100
    {
        square = 2;
        divisor = square * square;
        if (n >= divisor)
        {
            if (n % divisor != 0)
            {
                printf("%d is factorable to %d\n", n, divisor);
                // don't add the counter aka just add 1 to divisor
                counter++;
                if (n > divisor)
                {
                    square++;
                    printf("divisor = %d\n", n);
                }
            }
        }
        printf("n = %d counter = %d divisor = %d square = %d\n", n, counter, divisor, square);
        divisor = 0;
        square = 2;
        n++;
    }
}