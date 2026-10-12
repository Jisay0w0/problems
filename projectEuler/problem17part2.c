#include <stdio.h>
// If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?

int main()
{
    char ones[9][100] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int numOnes[10] = {0, 3, 3, 5, 4, 4, 3, 5, 5, 4};
    char ten[10][100] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    int numTen[11] = {0, 3, 6, 6, 8, 8, 7, 7, 9, 8, 8};
    char tens[9][100] = {"ten", "twenty", "thirthy", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    int numTens[10] = {0, 3, 6, 7, 5, 5, 5, 7, 6, 6};

    int sum = 0;
    int temp = 0;
    int check = 0;

    for (int i = 1; i <= 19; i++)
    {
        if (i == 1000)
        {
            printf("one thousand");
            sum += 11;
        }
        else if (i >= 1 && i <= 9)
        {
            printf("%s ", ones[i - 1]);
        }
        else if (i >= 10 && i < 20)
        {
            printf("%s ", ten[i % 10]);
        }
        // Approaching 20 territory na

        else if (i >= 20 && i <= 99)
        {
            check = i;
            printf("")


        }
    }
}