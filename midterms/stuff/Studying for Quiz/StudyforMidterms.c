#include <stdio.h>

// check if the number is abundant

int main()
{

    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    int sum = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum > n)
    {
        printf("it's an abundant number\n");
    }
    else if (sum < n)
    {
        printf("it's a defficient\n");
    }
    else
    {
        printf("the number is perfect\n");
    }
}