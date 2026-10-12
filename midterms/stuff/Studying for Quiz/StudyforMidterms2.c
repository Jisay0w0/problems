#include <stdio.h>

// check if the number is a happy number

int main()
{
    int number = 12;
    int digit = 0;
    int sum = 0;
    int temp2 = number;

    while (temp2 != 1 && temp2 != 4)
    {
        for (int temp = temp2; temp != 0; temp /= 10)
        {
            digit = temp % 10;
            sum = sum + digit * digit;
        }
        temp2 = sum;
        sum = 0;
    }
    if (temp2 == 1)
    {
        printf("it's a happy number\n");
    }
    else
    {
        printf("it's not a happy number\n");
    }
}
