#include <stdio.h>
// make a multiplication table from 1 to 10

int main()
{
    for (int j = 1; j <= 10; j++)
    {
        int product = 1;
        int i = 1;
        //while
        while(i <= 10)
        {
            product = i * j;
            printf("%d ", product);
            i++;
        }
        i = 1;
        printf("\n");
    }
}