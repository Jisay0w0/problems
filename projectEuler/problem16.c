#include <stdio.h>
#include <math.h>

// What is the sum of the digits of the number 2^1000?

int main(void)
{
    int arr[1000] = {1};
    int limit = 0;
    int end = 0;
    int product = 1;
    int carry = 0;
    int sum = 0;

    for (int i = 1; i < 1001; i++)
    {
        for (int j = 0; j <= end; j++)
        {
            product = arr[j] * 2;
            // printf("product = %d\n", product);
            // printf("j = %d\n", j);
            // printf("prod = %d\n", product);
            if (product >= 10)
            {
                // printf("product = %d\n", product);
                arr[j] = product % 10 + carry;
                // printf("%d\n", arr[j]);

                if (arr[j + 1] == 0 && arr[j + 2] == 0 && arr[j + 3] == 0 && arr[j + 4] == 0 && arr[j + 5] == 0)
                {
                    // printf("end = %d\n", end);
                    arr[j + 1] = product / 10;
                    end++;
                    carry = 0;
                    // printf("j + 1 = %d end = %d\n", arr[j + 1], end);
                    break;
                }
                else
                {
                    carry = product / 10;
                    // printf("end = %d\n", end);
                    //  printf("carry = %d\n", carry);
                }
            }
            else
            {
                // printf("carry = %d\n", carry);
                arr[j] = product + carry;
                carry = 0;
            }
        }
        // for (int i = 0; i <= 301; i++)
        // {
        //     sum += arr[i];
        //     printf("%d", arr[i]);
        // }
        // printf("\n");
    }
    for (int i = 0; i <= 301; i++)
    {
        sum += arr[i];
        // printf("%d", arr[i]);
    }
    printf("sum = %d\n", sum);
}
