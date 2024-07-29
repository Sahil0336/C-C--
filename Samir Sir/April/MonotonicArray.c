#include <stdio.h>
#define n 4
int main()
{
    int a[n] = {1, 2, 2, 3};
    // int a[n] = {6,5,4,4};
    // int a[n] = {1,3,2};
    int i, c = 0, k = 0;
    for (i = 0; i < n - 1; i++)
    {
        if (a[i] <= a[i + 1])
        {
            c++;
        }
        if (a[i] >= a[i + 1])
        {
            k++;
        }
    }
    if (c == i || k == i)
    {
        printf("\nTrue");
    }
    else
    {
        printf("\nFalse");
    }
    return 0;
}