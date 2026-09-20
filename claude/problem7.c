#include <stdio.h>
#include <math.h>
//write a code that finds the height of an object 

int main()
{
    int distance = 50, angle = 30;

    double radian = (angle * M_PI) / 180;

    double height = distance * tan(radian);

    printf("the height is %.2f\n", height);
}