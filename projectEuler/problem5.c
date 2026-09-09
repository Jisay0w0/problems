#include <stdio.h>
//what is the smallest positive number that is evenly divisible by all numbers from 1 to 20
int main()
{

    int n = 2520;
    int number = 20;
    int test;

    for (int divisors = 1; divisors <= 20; divisors++)
    {
        test = number % divisors;
        // printf("test = %d\n", test);
        if (test > 0)
        {
            number = number + 20;
            divisors = 1;
            // printf("number =  %d\n",number);
        }
    }
    printf("number = %d", number);
}