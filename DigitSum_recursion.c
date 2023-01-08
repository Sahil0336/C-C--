#include <stdio.h>
int main()
{
    int n;
    int digitsum(int);
    printf("\nEnter a no.: ");
    scanf("%d", &n);
    printf("%d ", digitsum(n));
    return 0;
}
int digitsum(int n)
{
    if (n)
        return n % 10 + digitsum(n / 10);
    else
        return 0;
}