// Find the sum of all elements in an array of integers
#include <stdio.h>
int main()
{
    int a[5], i;
    for (i = 0; i < 5; i++)
    {
        printf("\n Enter next no:");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
        printf("%d, ", a[i]);
    return 0;
}