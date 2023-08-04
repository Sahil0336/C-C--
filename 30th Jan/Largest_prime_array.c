#include <stdio.h>
#define n 7
int main()
{
    int a[n] = {25, 29, 18, 47, 73, 96, 88};
    int i, j, m = 0, f, x;
    printf("\nArray elements: ");
    for (i = 0; i < n; i++)
    {
        printf(" %d", a[i]);
    }
    for (i = 0; i < n; i++)
    {
        x = a[i];
        f = 1;
        for (j = 2; j < x / 2; j++)
            if (x % j == 0)
            {
                f = 0;
                break;
            }
        if (f)
            if (m < x)
                m = x;
    }
    printf("\nLargest prime number: %d", m);
    return 0;
}