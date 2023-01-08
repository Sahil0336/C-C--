#include <stdio.h>
int main()
{
    int n;
    int sums(int);
    printf("\nEnter a no.: ");
    scanf("%d", &n);
    printf("%d", sums(n));
    return 0;
}
int sums(int n)
{
    if (n)
        return n + sums(n - 1);
    else
        return 0;
}