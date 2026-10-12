#include <stdio.h>

int main()
{
    char ones[9][100] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int numOnes[9] = {3, 3, 5, 4, 4, 3, 5, 5, 4};
    char ten[9][100] = {"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    int numTen[9] = {6, 6, 8, 8, 7, 7, 9, 8, 8};
    char tens[9][100] = {"ten", "twenty", "thirthy", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    int numTens[9] = {3, 6, 7, 5, 5, 5, 7, 6, 6};

    int temp = 0;
    int check = 0;

    long int sum = 0;

    // printf("enter a number = ");
    // scanf("%d", &n);

    for (int i = 1; i <= 1000; i++)
    {
        temp = i;
        if (i == 1000)
        {
            printf("one thousand ");
            sum += 11;
        }
        else if (i <= 999 && i > 99)
        {
            check = temp / 100;

            printf("%s ", ones[check - 1]);
            sum += numOnes[check - 1];
            printf("hundred ");
            sum += 7;

            check = temp % 100;
            if (check <= 99 && check >= 20)
            {
                printf("and ");
                sum += 3;
                printf("%s ", tens[(check / 10) - 1]);
                sum += numTens[(check / 10) - 1];
                printf("%s ", ones[(check % 10) - 1]);
                sum += numOnes[(check % 10) - 1];
                // 99 to 0
            }
            else if (check == 10)
            {
                printf("%s ", tens[0]);
                sum += 3;
            }
            else if (check < 20 && check > 10)
            {
                check = i % 100;
                printf("%s ", ten[(check % 10) - 1]);
                sum += numTen[(check % 10) - 1];
            }

            else if (check > 0 && check <= 10)
            {
                check = i % 100;
                printf("%s ", ones[check - 1]);
                sum += numOnes[check - 1];
            }
            // 999 - 100
            // use ones -> hundreds
            // %100
        }
        else if (i <= 99 && i >= 20)
        {
            check = i;
            printf("%s ", tens[(check / 10) - 1]);
            sum += numTens[(check / 10) - 1];
            printf("%s ", ones[(check % 10) - 1]);
            sum += numOnes[(check % 10) - 1];
        }
        else if (i < 20 && i > 10)
        {
            check = i;
            printf("%s ", ten[(check % 10) - 1]);
            sum += numTen[(check % 10) - 1];
        }
        else if (i == 10)
        {
            printf("%s ", tens[0]);
            sum += 3;
        }
        else if (i > 0 && i < 10)
        {
            check = i;
            printf("%s ", ones[check - 1]);
            sum += numOnes[check - 1];
        }

        printf(" sum = %d", sum);
        printf("\n");
    }
    printf("\nsum = %ld", sum);
}