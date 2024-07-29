#include <stdio.h>
int repeat(int);
int main()
{
    int n, s;
    printf("\nEnter your number: ");
    scanf("%d", &n);
    s = repeat(n);
    printf("\nOutput: %d", s);
    return 0;
}
int repeat(int x)
{
    int q;
    while (x > 9)
    {
        q = 0;

        while (x > 0)
        {
            q = q + x % 10;
            x = x / 10;
        }
        x = q;
    }
    return q;
}