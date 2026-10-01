#include <stdio.h>
#include <math.h>
//write a code that calculates the distance between 2 points of a plane

int main()
{
    int x1 = 0, y1 = 0, x2 = 3, y2 = 4;

    
    double distance = sqrt (pow(x1 - x2, 2) +  pow(y1 - y2, 2));

    printf("the distance is %.2f\n", distance);
}