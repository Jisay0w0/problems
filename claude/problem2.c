// Perfect Number — check if n equals the sum of its divisors (excluding itself).

#include <stdio.h>

int main()
{
    int n;

    printf("enter a number: \n");
    scanf("%d", &n);
    int factors = 1;
    int sum = 0;
    int flag = 0;

    while (factors < n)
    {
        if (n % factors == 0)
        {
            sum = sum + factors;
        }
        factors++;
    }
    if (sum == n)
    {
        flag = 1;
    }
    if (flag == 1)
    {
        printf("%d is a perfect number\n", n);
    }
    else
    {
        printf("%d is not a perfect number \n", n);
    }
    flag = 0;
}