#include <stdio.h>
//find the largest prime factor

int main()
{
    long long int n = 600851475143;
    int result;
    int prime = 3;
    long long int divisor = 2;
    long long int check;

    while (divisor <= n)
    {
        check = n % divisor;
         

        if (check == 0)
        {
            n = n / divisor;
            printf("check = %lld\n divisor = %d", check, divisor);
        }
        else
        {
            divisor++;
            printf("divisor = %lld\n", divisor);
        }
    }

    // while (divisor < prime)
    // {
    //     result = prime % divisor;

    //     printf("result = %d prime = %d divisor = %d \n", result, prime, divisor);
    //     if (divisor == prime - 1)
    //     {
    //         prime++;
    //         printf("prime = %d", prime);
    //         divisor = 1;
    //     }
    // }
    // divisor++;

    return 0;
}