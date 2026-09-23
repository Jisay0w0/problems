#include <stdio.h>

int main()
{
    long long int limit = 163000;
    long long int sum = 0;

    for (long long int i = 1; i <= limit; i++)
    {
        long long int num = 2 * i - 1;
        sum = sum + num * num;
    }

    printf("sum = %lld\n", sum);

    return 0;
}