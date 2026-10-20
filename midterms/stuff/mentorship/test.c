#include <stdio.h>

int main()
{
    int n = 13195;
    int factor = 2;

    while (factor <= n)
    {
        if (n % factor == 0)
        {
            n /= factor;
            printf("factor = %d n = %d\n", factor, n);
        }
        else
        {
            factor++;
        }
    }
    printf("%d", factor);   
}