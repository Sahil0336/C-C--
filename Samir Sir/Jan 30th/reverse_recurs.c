#include <stdio.h>
int reverse(int, int);
int main()
{
    int n, r = 0;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    printf("%d", reverse(r, n));
    return 0;
}
int reverse(int r, int n)
{
    if (n)
    {

        return reverse(r * 10 + n % 10, n / 10);
    }
    else
    {
        return r;
    }
}