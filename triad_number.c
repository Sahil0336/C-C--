#include <stdio.h>
int main()
{
    int n, f = 1, a[10], i, j = 0, x;
    printf("\nEnter your number: ");
    scanf("%d", &n);
    for (i = 1; i <= 3; i++)
    {
        x = n * i;
        a[j++] = x % 10;
        x = x / 10;
        a[j++] = x % 10;
        a[j++] = x / 10;
    }
    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 10; j++)
            if (a[i] == a[j])
            {
                f = 0;
                break;
            }
        if (f == 0)
            break;
    }
    if (f)
        printf("\nTRIAD number...");
    else
        printf("\nNot a TRIAD number...");
    return 0;
}
/* For Triad Number
                                                        1. Input
                                                        2. Isolate the digits
                                                        3. Store in an array
                                                        4. Check if repeated number is in the array      */