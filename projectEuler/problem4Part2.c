#include <stdio.h>
//find the largest palindrome made from the product of two 3-digit numbers
int main()
{

    int n2 = 1;
    int product;
    int add;
    int palindrome = 0;
    int palProduct;
    int biggest = 0;

    for (int i = 1; i < 1001; i++)
    {

        if (i == 1000)
        {
            n2++;
            i = 1;
            if (n2 == 1000)
            {
                break;
            }
        }
        product = i * n2;
        //printf("i = %d n2 = %d product = %d\n", i, n2, product);
        palProduct = product;
        while (palProduct != 0)
        {
            add = palProduct % 10;
            palProduct = palProduct / 10;
            palindrome = palindrome * 10 + add;
            if (palindrome == product)
            {
                // printf("this is a palindrome = %d\n", palindrome);
                
                if (palindrome > biggest){
                    biggest = palindrome;
                    printf("this is bigger = %d\n", biggest);
                }

            }
        }
       //printf("palindrome = %d\n", palindrome);
        palindrome = 0;
    }

    return 0;
}