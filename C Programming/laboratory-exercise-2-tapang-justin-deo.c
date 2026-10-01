#include <stdio.h>
#include <math.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int ac = 0;
    int nB = 0;
    float x = 0;
    float x2 = 0;
    int discriminant = 0;
    float root = 0;

    printf("\n");
    printf("input a: ");
    scanf("%d", &a);

    while (a == 0)
    {
        printf("\nERROR!!!!!");
        printf(" 'a' should not be equal to 0... enter another number\n");
        printf("\n====================================\n");
        printf("\ninput a: ");
        scanf("%d", &a);
    }
    // printf("input b: ");
    // scanf("%d", &b);
    // printf("input c: ");
    // scanf("%d", &c);
    printf("\n======================================\n");
    printf("\ninput b: ");
    scanf("%d", &b);
    printf("\n======================================\n");
    printf("\ninput c: ");
    scanf("%d", &c);

    ac = a * c;
    discriminant = (b * b) + (-4 * ac);

    // printf("discriminant = %d\n", discriminant);

    if (discriminant < 0)
    {
        printf("\n======================================\n");
        printf("\nThere is no real value for x!\n");
    }

    else if (discriminant > 0)
    {
        // printf("there are 2 distinct values for x")
        root = sqrt(discriminant);
        // printf("root = %.2f\n", root);
        nB = -1 * b;

        x = (nB + root) / (2 * a);
        x2 = (nB - root) / (2 * a);
        printf("\n======================================\n");
        printf("\nThere are 2 distinct values for x and it's\n");
        printf("%.2f and %.2f", x, x2);
    }
    else
    {
        root = sqrt(discriminant);
        // printf("root = %.2f\n", root);
        nB = -1 * b;

        x = (nB + root) / (2 * a);
        // x2 = (nB + root) / (2 * a);
        printf("\n======================================\n");
        // printf("%.2f\n", x2);
        printf("\nThere is only one value for x and it's \n%.2f\n", x);
    }

    // float i = sqrt(20);
    // printf("i = %.2f", i);
}