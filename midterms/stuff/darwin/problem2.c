#include <stdio.h>

/*A prime number is called "Increasing" if each of its digits is strictly greater than the digit
to its left (for example, 137 or 239). Find the largest Increasing Prime below 1,000.*/
int main()
{
    int limit = 1000;
    int prime;
    int n = 1;
    int flag = 0;      // check if it's prime
    int digitFlag = 0; // check if it's increasing
    int digit;
    int digitNumber;
    int lastDigit = 10;

    while (n < limit)
    {
        //-------------------------checking if prime part-----------------------------------------
        for (int divisor = 2; divisor < n; divisor++)
        {
            if (n % divisor == 0)
            {
                // printf("not a prime %d\n", n);
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            digitNumber = n;
            while (digitNumber > 0)
            {
                digit = digitNumber % 10;

                if (digit >= lastDigit)
                {
                    digitFlag = 1;
                    break;
                }
                lastDigit = digit;
                digitNumber = digitNumber / 10;
                // printf("digitNumber = %d digit = %d last digit = %d \n", digitNumber, digit, lastDigit);
            }
            digit = 0;
            lastDigit = 10;

            if (digitFlag == 0)
            {
                printf("%d is a prime \n", n);
            }
            digitFlag = 0;
        }
        flag = 0;
        //---------------------------end sa checking sa prime part------------------------------------------
        n++;
    }
}