#include <stdio.h>
#include <math.h>
// There exists exactly one pythagorean triplet for which a + b + c = 1000. Find the product of abc
int main()
{
    int a = 1;
    int b = 2;
    float c;
    int answer = 1;

    // loop for adding values of each var
    while ((a + b + c) <= 1000)
    {
        c = sqrt((a * a) + (b * b));
        b = 2;
        while (b < c)
        {
            // printf("b = %.1f\n", b);
            b++;
            while (a < b - 1)
            {
                // printf("a = %.1f b = %.1f\n", a, b);
                a++;
                c = sqrt((a * a) + (b * b));
                if ((a + b + c) == 1000)
                {
                    answer = a * b * c;
                    //printf("a = %d b = %d c = %.2f this is a thouand\n", a, b, c);
                }
            }
            a = 1;
        }

        printf("answer = %d\n", answer);
        // printf("a = %d b = %d\n", a, b);
        // printf("%.2f\n", c);
        // a + b + c == 1000;

        // printf("%.2f\n", c);
        // printf("a = %.1f b = %.1f\n", a, b);
        // printf("%.2f\n", c);
    }
}