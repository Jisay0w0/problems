#include <stdio.h>
//divide without using the division symbol

int main()
{

    int dividend = 10;
    int divisor = 6;
    int counter = 0;

    while (dividend > 0)
    {
        dividend = dividend - divisor;
        if (dividend < 0)
        {
            break;
        }
        counter++;
        // printf("answer = %d dividend = %d counter = %d\n", dividend, divisor, counter);
    }

    printf("%d\n", counter);
}