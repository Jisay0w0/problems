#include <stdio.h>
// write a pseudocode that asks an n-sized input and print the factorial equivalent for each input

int main()
{
    int n;
    int nCount;
    printf("enter how many numbers you want: ");
    scanf("%d", &nCount);

    int product = 1;

    for (int i = 1; i <= nCount; i++)
    {
        printf("\nenter a number: ");
        scanf("%d", &n);

        for (int j = n; j > 0; j--)
        {
            product = product * j;
        }

        printf("%d ", product);
        product = 1;
    }
}