#include <stdio.h>
#include <ctype.h>

// gets the gcf, lcm and factors of 2 inputs

int main()
{
    int n1, n2;
    char op;
    int gcf = 0;
    int lcm = 0;
    int lcm1 = 0;
    int lcm2 = 0;
    int factors = 1;

    scanf("%d %d %c", &n1, &n2, &op);

    switch (toupper(op))
    {
    case 'G':
        for (int factors = 1; factors <= n1 / 2 && factors <= n2 / 2; factors++)
        {
            if (n1 % factors == 0 && n2 % factors == 0)
            {
                gcf = factors;
            }
        }
        printf("GCF = %d", gcf);
        break;
    case 'L':
        for (int factors = 1; factors <= n1 / 2 && factors <= n2 / 2; factors++)
        {
            if (n1 % factors == 0 && n2 % factors == 0)
            {
                gcf = factors;
            }
        }

        lcm = gcf * (n1 / gcf * n2 / gcf);

        // gcf * (n1 / gcf * n2 / gcf)

        printf("lcm = %d\n", lcm);
        break;

    case 'F':
        for (int factors = 1; factors <= n1 / 2 && n2 / 2; factors++)
        {
            if (n1 % factors == 0 && n2 % factors == 0)
            {
                printf ("%d ", factors);
            }
        }
        break;
    default:
        printf("invalid");
        break;
    }
}