/*Make a 10 sized array and make a pair by two boxes and sum all the small numbers from each pairs*/
#include <stdio.h>
#define max 10
int main()
{
    int a[max];
    int sum = 0, i;
    for (i = 0; i < max; i++)
    {
        printf("\nEnter number a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= 9; i = i + 2)
        if (a[i] < a[i + 1])
            sum = sum + a[i];
        else
            sum = sum + a[i + 1];
    printf("\nTotal is: %d ", sum);
    return 0;
}