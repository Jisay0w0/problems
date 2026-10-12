#include <stdio.h>
// find the sum of prime numbers below 100

int main()
{
    int limit = 100;
    int flag = 1;
    int sum = 0;

    for (int prime = 2; prime <= limit; prime += 1)
    {
        for (int factors = 2; factors < prime; factors++)
        {
            // flag = 1;
            if (prime % factors == 0)
            {
                flag = 0;
                // printf("%d not a prime number\n", prime);
                break;
            }
            else
            {
                flag = 1;
            }
            // printf("prime = %d\n", prime);
            // printf("%d ", factors);
        }


        if (flag == 1)
        {
            // printf("prime number = %d\n", prime);
            sum = sum + prime;
            
        }
        
    }
    
    printf("%d", sum);
}