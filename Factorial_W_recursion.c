#include <stdio.h>
int main()
{
    int n;
    int factor(int);
    printf("\nEnter a no.: ");
    scanf("%d", &n);
    printf(" %d", factor(n));
    return 0;
}
int factor(int n)
{
    if (n)
        return n * factor(n - 1);
    else
        return 1;
}