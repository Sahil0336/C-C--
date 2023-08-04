#include <stdio.h>
int sum(int, int);
int main()
{
    int a, b, s;
    printf("\nEnter two numbers: ");
    scanf("%d%d", &a, &b);
    s = sum(a, b);
    printf("Sum  of %d & %d is: %d", a, b, s);
    return 0;
}
int sum(int x, int y)
{
    int z;
    z = x + y;
    return z;
}