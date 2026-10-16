#include <stdio.h>

int main()
{
    int n = 0, product = 1;
    scanf("%d", &n);

    if (n < 0 && n > 12)
    {
        printf("input too low/input too large");
    }
    else
    {
        printf("0! = 1\n");
        for (int i = 1; i <= n; i++)
        {

            product *= i;
            printf("%d! = %d\n", i, product);
        }
        // printf("%d", product);
        // 1 * 2 * 3 * 4 * 5 * 6
    }
}