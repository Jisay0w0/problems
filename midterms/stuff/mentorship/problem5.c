#include <stdio.h>
// Print the rst n rows of Pascal’s triangle, centered as a triangle
int main()
{
    int n;

    n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("");
        }
        int num = 1;
        for (int k = 1; k <= i; k++)
        {
            printf("%d\n", num);
            //printf("i = %d k = %d\n", i, k);
            num = num * (i - k) / k;
            printf("%d\n",num);
            printf("i = %d k = %d\n", i, k);
        }
        printf("===================\n");
    }
}