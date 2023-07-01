//There are multiple values but only one single value,
//Print the only single value
#include <stdio.h>
int main()
{
    int a[] = {4, 1, 2, 1, 2};
    int i, n, r = 0;
    n = sizeof(a) / sizeof(int);
    printf("\nNo of elements: %d\n", n);
    printf("the array is: ");
    for (i = 0; i < n; i++)
        printf(" %d ", a[i]);
    for (i = 0; i < n; i++)
        r = r ^ a[i];
    printf("\nThe number is: %d", r);
    return 0;
}