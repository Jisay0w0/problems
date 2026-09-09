#include <stdio.h>
//Finding Prime Factors
int main()
{
    int n;
    printf("enter a number: \n");
    scanf("%d", &n);
    
    int answers = 0;
    int temp = n;
    int i = 3;

    while (temp > 1)
    {
        while (i <= temp)
        {
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    break;
                }
                while (temp % 2 == 0)
                {
                    printf("2 ");
                    temp = temp / 2;
                }
                while (temp % i == 0)
                {
                    printf("%d ", i);
                    temp = temp / i;
                    // printf("temp = %d \n", temp);
                }
            }
            i++;
        }
    }
}