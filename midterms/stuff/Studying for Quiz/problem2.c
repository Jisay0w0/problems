#include <stdio.h>

int main()
{
    int n = 1;
    int limit = 5;

    int x;

    for (int i = 0, y = 1; y <= limit; y++)
    {
        x = i * 10 + y;
        i = x;
        printf("%d\n", x);
    }
}