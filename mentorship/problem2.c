#include <stdio.h>
//Finding the factorial
int main()
{
    int n;
    printf("enter a number: \n");
    scanf("%d", &n);
    int i = 1;
    int product = 1;

    while (i <= n)
    {
        product = product * i;
        i++;
    }
    printf("the factorial is %d\n", product);
}