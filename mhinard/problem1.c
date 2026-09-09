#include <stdio.h>

int main()
{
    int n;
    int temp;
    int digit = 0;
    int palindrome = 0;
    printf("enter a number: \n");
    scanf("%d", &n);

    temp = n;
    while (temp > 0)
    {
        digit = temp % 10;
        palindrome = palindrome * 10 + digit;
        temp = temp / 10;
    }
    if (palindrome == n)
    {
        printf("it's a palindrome\n");
    }
    else
    {
        printf("it's not a palindrome");
    }

    return 0;
}