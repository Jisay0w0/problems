#include <stdio.h>

int main()
{
    int num = 1;
    long long int limit = 880000;
    long long int square = 1;
    long long int sum = 0;

    while (num <= limit)
    {
        if (num % 2 != 0)
        {
            square = num * num;

            if (square < limit)
            {
                sum = sum + square;
            }
        }
        num = num + 2;
    }
    printf("sum = %lld\n", sum);
}