#include <stdio.h>
#define n 8
int main()
{
    int a[n] = {234, 531, 66, 79, 123, 468, 78, 245};
    int i, x, s, r;
    printf("\n Your array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    for (i = 0; i < n; i++)
    {
        x = a[i];
        if (x % 2 == 0)
        {
            s = 0;
            while (x)
            {
                s = s + x % 10;
                x = x / 10;
            }
            a[i] = s;
        }
        else
        {
            r = 0;
            while (x)
            {
                r = r * 10 + x % 10;
                x = x / 10;
            }
            a[i] = r;
        }
    }
    printf("\nModified array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}