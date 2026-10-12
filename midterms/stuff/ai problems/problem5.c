#include <stdio.h>
// Automorphic Number — check if n² ends with n itself (e.g. 25² = 625, which ends in 25).
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    int digitCount = 0;
    int lastDigits = 0;
    int squared = n * n;
    int answer = 0;
    int temp = n;
    int digit = 1;

    while (temp > 0)
    {
        digitCount++;
        temp = temp / 10;
        //printf("digitCount = %d\n", digitCount);
    }
    for (int i = 1; i <= digitCount; i++)
    {
        // get the n digits of the squared
        digit = digit * 10;
        //printf("digit = %d\n", digit);
    }
    answer = squared % digit;
    if (answer == n)
    {
        printf("%d is an automorphic number\n", n);
    }
    else
    {
        printf("%d is not an automorphic number\n", n);
    }
}