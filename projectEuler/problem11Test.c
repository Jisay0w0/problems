#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    int temp = 0;
    int temp2 = 0;

    for (int limit = 1; limit <= 20; limit++)
    {
        i = temp;
        while (i <= 19)
        {
            printf("[%d][%d]\n", i, j);
            i++;
            j++;
        }
        printf("==================================================\n");
        temp++;
        j = 0;

    }

    // i = 0;
    // j = 0;
    // temp = 0;
    // temp2 = 0;

    // for (int limit = 1; limit <= 20; limit++)
    // {
    //     j = temp2;
    //     while (j <= 19)
    //     {
            
    //         printf("[%d][%d]\n", j, i);
    //         i++;
    //         j++;
    //     }
    //     printf("==================================================\n");
    //     temp2++;
    //     i = 0;
    // }

    // int k = 19;
    // int l = 0;
    // int temp3 = 0;
    // int temp4 = 0;
    // for (int limit = 1; limit <= 20; limit++)
    // {
    //     l = temp4;
    //     k = 19;
    //     while (k >= temp3)
    //     {
    //         printf("[%d][%d]\n", k, l);
    //         k--;
    //         l++;
    //     }
    //     printf("==================================================\n");
    //     temp3++;
    //     temp4++;
    // }
    // int m = 19;
    // int n = 0;
    // int temp5 = 19;

    // for (int limit = 1; limit <= 20; limit++)
    // {
    //     m = temp5;
    //     while (m >= 0)
    //     {
    //         printf("[%d][%d]\n", m, n);
    //         m--;
    //         n++;
    //     }
    //     printf("==================================================\n");
    //     temp5--;
    //     n = 0;
    // }
}