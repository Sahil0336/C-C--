#include <stdio.h>
#define n 5
// Find how many prime numbers inside an array of integer
int main()
{
    int a[n], x, i, c = 0, f, j;
    for (i = 0; i < n; i++)
    {
        printf("Enter no[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        f = 1;
        x = a[i];
        for (j = 2; j < x / 2; j++)
            if (x % j == 0)
            {
                f = 0;
                break;
            }
        if (f == 1)
            c++;
    }
    printf("\n Total number of prime numbers: %d", c);
    return 0;
}
