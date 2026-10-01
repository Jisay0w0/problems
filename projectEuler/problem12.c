// What is the value of the first triangle number to have over five hundred divisors?

#include <stdio.h>

int main()
{
    long long int triangleNumber = 0;
    long long int factors = 1;
    int count = 0;

    for (int limit = 1; limit <= 100000; limit++)
    {
        triangleNumber = triangleNumber + limit;

        while (factors * factors <= triangleNumber)
        {
            if (triangleNumber % factors == 0)
            {
                // printf(".");
                if (factors * factors == triangleNumber)
                {
                    count++;
                }
                else
                {
                    count += 2;
                }
            }
            factors++;
        }

        if (count > 500)
        {
            printf("\nThe number with 500 factors is %lld\n", triangleNumber);
        }
        factors = 1;
        // printf("triangle number = %lld\n", triangleNumber);
        // printf("count = %d\n", count);
        // printf("================\n");
        count = 0;
    }
}