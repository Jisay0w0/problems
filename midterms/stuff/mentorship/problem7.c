#include <stdio.h>
// Read and print Amicable or Notamicable.
int main()
{
    int n = 1210;
    int sum = 0;
    int otherSum = 0;

    for (int factors = 1; factors <= n / 2; factors++)
    {
        if (n % factors == 0)
        {
            sum += factors;
        }
    }
    printf("%d\n", sum);
    for (int factors = 1; factors <= sum / 2; factors++)
    {
        if (sum % factors == 0)
        {
            otherSum += factors;
        }
    }
    printf("%d \n", otherSum);
    if (sum != n && otherSum == n)
    {
        printf("%d is Amicable", n);
    }
    else
    {
        printf("%d is Not Amicable", n);
    }
}