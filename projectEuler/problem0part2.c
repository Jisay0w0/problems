#include <stdio.h>

int main()
{
    int i = 1;
    int limit = 880000;
    long long int square;
    long long int sum = 0;

    while (i * i <= limit)
    {
        square = i * i;
        if (square % 2 != 0)
        {
            sum = sum + square;
        }
        i++;

        
    }
    printf("%lld\n", sum);
}
//137548789