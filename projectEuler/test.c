#include <stdio.h>

int main()
{
    long long int number = 1234567890123;
    number = number % 1000000000000;
    printf("%lld", number);
}