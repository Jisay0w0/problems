#include <stdio.h>

int main()
{
    int test = 123;
    int sum;

    while(test > 0){
        test /= 100;
        printf("%d\n", test);
    }
}