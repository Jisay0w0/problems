// FizzBuzz — for 1 to n: print "Fizz" (÷3), "Buzz" (÷5), "FizzBuzz" (÷both), or the number.

#include <stdio.h>

int main()
{
    int n = 15;
    int i = 1;

    while (i <= n)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("FizzBuzz\n");
        }
        else if (i % 3 == 0)
        {
            printf("Fizz\n");
        }
        else if (i % 5 == 0)
        {
            printf("Buzz\n");
        }
        else
        {
            printf("%d\n", i);
        }
        i++;
    }
}