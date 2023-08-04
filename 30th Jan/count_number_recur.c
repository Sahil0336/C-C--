#include <stdio.h>
int coun(int);
int main()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    printf("%d", coun(n));
    return 0;
}
int coun(int n)
{
    if (n > 0)
    {
        return 1 + coun(n / 10);
    }
    else
    {
        return 0;
    }
}