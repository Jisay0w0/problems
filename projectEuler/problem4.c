#include <stdio.h>
//find the largest palindrome made from the product of two 3-digit numbers
int main()
{

    int test = 1234;
    int check;
    int limit = 10;
    int palindromeCheck;
    int palindrome = 0;
    int divide = 10;
    int pal;

    int n1 = 1;
    int n2 = 1;

    // while(test != 0)
    // {
    // palindromeCheck = test % 10;
    // test = test / divide;
    // divide * 10;
    // palindrome = palindrome * 10 + palindromeCheck;
    // printf("palindromeCheck = %d test = %d divide = %d palindrome = %d\n", palindromeCheck, test, divide, palindrome);
    // }

    while (n1 < limit && n2 < limit)
    {
        check = n1 * n2;

        /*
        is to check if all the number from the check int is turned into a palindrome
        then proceed to add 1 to n1
        */
        if (check != 0)
        {
            pal = check;
            //--------------------------------------------------------------//
            palindromeCheck = pal % 10;
            pal = pal / divide;
            divide * 10;
            palindrome = palindrome * 10 + palindromeCheck;

            if (palindrome == check)
            {
                printf("this is a palindrome = %d\n ", palindrome);
            }
            
        }
        palindrome = 0;
        n1++;

        if (n1 == 10)
        {
            n2++;
            n1 = 1;
        }
        printf("n1 = %d n2 = %d check = %d\n", n1, n1, check);
        // printf("palindromeCheck = %d check = %d palindrome = %d\n", palindromeCheck, check, palindrome);

        //printf("n1 = %d n2 = %d limit = %d check = %d\n ", n1, n2, limit, check);
    }

    // while(){
    //     check test %

    // }

    return 0;
}