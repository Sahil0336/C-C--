// Find the sum of all elements in an array of integers
#include <stdio.h>
#define n 5
int main()
{
    int a[n], i, p = 0;
    for (i = 0; i < n; i++)
    {
        printf("\n Enter next no:");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        p = p + a[i];
    }
    printf("%d, ", p);
    return 0;
}