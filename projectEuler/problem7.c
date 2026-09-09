#include <stdio.h>

int main()
{
    int number = 1;
    int check;
    int nth = 0;
    int inputTerm = 10001 - 2;
    int limit = inputTerm;
    int realNumber;

    while (nth <= limit)
    {
        for (int divisor = 2; divisor < number; divisor++)
        {
            check = number % divisor;
            //printf("divisor = %d number = %d check = %d\n", divisor, number, check);
            if (check == 0)
            {
                //printf("this not a prime\n");
                break;
            }
            if (divisor == number - 1)
            {
                nth++;
                //printf("nth = %d\n", nth);
            }
        }
        // printf("prime = %d\n", number);
        number++;
    }
    realNumber = number - 1;
    printf("answer is %d\n", realNumber);
    
}