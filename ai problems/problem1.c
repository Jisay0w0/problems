#include <stdio.h>
// Kaprekar's Routine — given a 4-digit number, repeatedly:
// arrange digits descending minus ascending,
// repeat until you reach 6174 (the Kaprekar constant); count the steps.
int main()
{
    int n;
    int digit;
    int d1 = 0;
    int d2 = 0;
    int d3 = 0;
    int d4 = 0;
    int temp = 0;
    int difference = 0;
    int increasing = 0;
    int decreasing = 0;

    int count = 0;

    printf("enter a number:\n");
    scanf("%d", &n);
    // example is 6381

    while (n != 6174)
    {
        while (n > 0)
        {
            digit = n % 10;
            d1 = digit;
            n /= 10;
            digit = n % 10;
            d2 = digit;
            n /= 10;
            digit = n % 10;
            d3 = digit;
            n /= 10;
            digit = n % 10;
            d4 = digit;
            n /= 10;

            if (d1 < d2)
            {
                temp = d1;
                d1 = d2;
                d2 = temp;
            }
            if (d1 < d3)
            {
                temp = d1;
                d1 = d3;
                d3 = temp;
            }
            if (d1 < d4)
            {
                temp = d1;
                d1 = d4;
                d4 = temp;
            }
            if (d2 < d3)
            {
                temp = d2;
                d2 = d3;
                d3 = temp;
            }
            if (d2 < d4)
            {
                temp = d2;
                d2 = d4;
                d4 = temp;
            }
            if (d3 < d4)
            {
                temp = d3;
                d3 = d4;
                d4 = temp;
            }
            increasing = (((d1 * 10) + d2) * 10 + d3) * 10 + d4;
            decreasing = (((d4 * 10) + d3) * 10 + d2) * 10 + d1;
            difference = increasing - decreasing;
            printf("d1 = %d d2 = %d d3 = %d d4 = %d increasing = %d decreasing = %d\n", d1, d2, d3, d4, increasing, decreasing);
        }
        count++;
        n = difference;
        printf("n = %d\n", n);
        difference = 0;
    }
    printf("count = %d\n", count);
}