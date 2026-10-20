#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int count = 0;

    for (int i = n; i != 1;)
    {
        if (i % 2 == 0)
        {
            i /= 2;
            count++;
        }
        else
        {
            i = (i * 3) + 1;
            count++;
        }
    }

    printf("%d", count);
}