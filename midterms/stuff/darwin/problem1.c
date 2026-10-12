// Find the sum of all 3-digit positive integers N (100 to 999) such that N + reverse(N) is a perfect square. *(Note: Reversing 440 yields 44, so 440 + 44 = 484 = 22^2)*.

#include <stdio.h>

int main(void)
{

    int limit = 1000;
    int digit;
    int number;
    int sum = 0;
    int reverse = 0;
    int answer = 0;

    for (int n = 100; n < limit; n++)
    {
        //printf("%d\n", n);
        number = n;
        while (number > 0) // sum of all the digits
        {
            digit = number % 10;
            number = number / 10;
            // sum = sum + digit;
            reverse = reverse * 10 + digit;
            //printf("digit = %d sum = %d \n", digit, sum);
        }
        //printf("reverse = %d n = %d\n", reverse, n);
        sum = n + reverse;
        for (int i = 1; i * i <= sum; i++)
        {
            if (i * i == sum)
            {
                printf("i = %d n = %d reverse = %d sum = %d\n ", i, n, reverse, sum);
                answer = answer + n;
            }
        }

        // printf("i = %d \n", i);
        sum = 0;
        reverse = 0;
    }
    printf("answer is %d\n", answer);
}