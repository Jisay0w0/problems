#include <stdio.h>
// the number with the largest collatz conjecture chain below 1 million

int main()
{
    int count = 0;
    int largest = 0;
    int largestNumber = 0;
    long long int temp = 0;
    int limit = 1000000;

    for (long long int n = 1; n <= limit; n++)
    {
        temp = n;
        while (temp != 1)
        {
            if (temp % 2 == 0)
            {
                temp /= 2;
                count++;
            }
            else
            {
                temp = (temp * 3) + 1;
                count++;
            }
        }

        printf("count = %d n = %d\n", count, n);
        if (count > largest)
        {
            largest = count;
            printf("largest = %d\n", largest);
            largestNumber = n;
        }
        count = 0;
    }
    printf("answer = %d", largestNumber);
}