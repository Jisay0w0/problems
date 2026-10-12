#include <stdio.h>
#include <math.h>

// What is the sum of the digits of the number 2^1000?

int main()
{
    char longArr[1000] = {};
    long long int n = pow(2, 10);
    longArr[0] = n + '0';
    printf("n = %s", longArr[0]);

}