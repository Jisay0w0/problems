#include <stdio.h>

/*ok so first this is the code, and as you can see the result is the remainder from dividing the potential prime number to a divisor. Now the divisor and the prime number are loops. And the main idea is that the prime is the number <= the input
and to find if its the prime you need to divide it with the numbers less than it like for example the input is 10 then the prime will loop from 1 to 10 then if example the prime is 7 then the numbers for the divisor is from 2 to 6 by being the first value of the
divisor being 1 then using ">" on the loop for it to be less than the prime. And then the next step is that you need to loop the divisors for every prime number so using the "if" statement.
*/

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