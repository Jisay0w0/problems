#include <stdio.h>

int main()
{
    int a, b, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        lcm = a;
    }
    else
    {
        lcm = b;
    }

    while (lcm % a != 0 || lcm % b != 0)
    {
        lcm++;
    
    }

    printf("LCM = %d\n", lcm);

    return 0;
}
