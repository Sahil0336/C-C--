#include <stdio.h>
#define n 7
int main()
{
    int a[n] = {5, 2, 8, 4, 7, 6, 9};
    int i, j, t;
    printf("\nArray elements: ", a[n]);
    for (i = 0; i < n - 1; i++)
    {

        printf(" %d", a[i]);
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    printf("\n Sorted array: ");
    for (i = 0; i < n; i++)
        printf(" %d", a[i]);
    return 0;
}