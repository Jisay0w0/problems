#include <stdio.h>
#include <math.h>
//There exists exactly one pythagorean triplet for which a + b + c = 1000. Find the product of abc
int main()
{
    int a = 2;
    int b = 3;
    int c;
    int sum = 0;
    int add = a + b + c;
    int limit = 12;

    while (sum <= limit)
    {
        c = sqrt(a * a + b * b);
        sum = 0;
        sum = a + b + c;
        printf("a = %d b = %d c = %d sum = %d\n", a, b, c, sum);
        b++;

        
    }
}