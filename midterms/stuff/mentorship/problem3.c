#include <stdio.h>
#include <math.h>
//write a code that solves the mass if the pressure is 1.01 x 10^5

int main()
{
    float R = 6370000, g = 9.8, p = 101000, m = 0;

    m = (((4 * M_PI) * (pow(R, 2))) * p) / g;

    printf("%.2f \n", m);
    
}