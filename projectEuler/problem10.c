#include <stdio.h>
// Find the sum of all the primes below 2 million

int main()
{
    int isPrime = 1;
    int divisor = 2;
    long long int sum = 2;
    long long int limit = 2000000;

    for (int i = 3; i < limit; i += 2)
    {
        // printf("loading %d", i);
        isPrime = 1;
        divisor = 3;
        while (divisor * divisor <= i)
        {
            if (i % divisor == 0) // checks if it's not a prime number
            {
                isPrime = 0;
                break;
            }
            // printf("divisors = %d i = %d\n", divisor, i);
            divisor += 2;
        }
        if (isPrime == 1) // prime flag
        {
            sum = sum + i;
            // printf("i = %d\n", i);
        }
        // printf("prime = %d\n", isPrime);

        // printf("i loop = %d\n", i);
        // printf("sum = %d\n", sum);
    }
    printf("sum = %lld", sum);
}

// cloud based vs desktop applications
// which one is better