#include <stdio.h>
// Strong Number — check if n equals the sum of the factorials of its digits (e.g. 145 = 1! + 4! + 5!).

int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);

    int factorial = 1;
    int sum = 0;
    int digit = 0;
    int temp = n;

    while (temp > 0)
    {
        digit = temp % 10;
        for (int i = 1; i <= digit; i++)
        {
            factorial = factorial * i;
            //printf("factorial = %d\n", factorial);
        }
        sum = sum + factorial;
        factorial = 1;
        temp = temp / 10;
    }
    if (sum == n)
    {
        printf("this is a strong number %d\n", n);
    }
    else
    {
        printf("this is not a strong number %d\n", n);
    }
}