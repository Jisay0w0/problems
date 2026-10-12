#include <stdio.h>

int main()
{
    int i;
    scanf("%d", &i);
    int temp = i;
    int k = 0;
    int base = 1;

    while (temp > 1)
    {
        if (base <= i)
        {
            base = base * 2;
            printf("base = %d\n", base);
            k++;
            temp /= 2;
        }
        
    }

    if (base == i)
    {
        printf("floor(log2(%d)) = %d\n", i, k);
        printf("Power of 2: yes");
    }
    else
    {
        printf("floor(log2(%d)) = %d\n", i, k);
        printf("Power of 2: no");
    }
}