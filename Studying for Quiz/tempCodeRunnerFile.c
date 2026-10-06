#include <stdio.h>

int main()
{
    int m = 10, n = 3, dig, digit_count = 0, t = 0;
    scanf("%d %d", &m, &n);
    
    int count[21] = {0};
    
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &dig);
        count[i] = dig;
        t = i;
    }
    int c = 0;
    while (c < t) {
        printf("%d ", count[c]);
        c++;
    }
    
    return 0;
}