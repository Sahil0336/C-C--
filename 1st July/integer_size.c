#include <stdio.h>
int main()
{
    int a[] = {2, 3, 6, 1, 6, 3, 2, 3, 2, 3, 3, 2, 3};
    int i, n;
    n = sizeof(a) / sizeof(int);
    printf("\n No of elements: %d\n", n);

    for (i = 0; i < n; i++)
        printf(" %d ", a[i]);
    return 0;
}