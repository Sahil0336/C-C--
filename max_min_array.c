#include <stdio.h>
#define n 5
// Find maximum and minimum no. from an array
int main()
{
    int i, a[n], max, min;
    for (i = 0; i < n; i++)
    {
        printf("\n Enter next no:");
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
        if (min > a[i])
        {
            min = a[i];
        }
    }
    printf("Maximum number is %d and minimum number is %d", max, min);
    return 0;
}
