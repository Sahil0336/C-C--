#include <stdio.h>
int ih(int, int);
int main()
{
    int a, b, i = 0;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("Number is %d", ih(a, b));
    return 0;
}
int ih(int a, int b)
{
    if (b == 0)
    {
        return 0;
    }
    if (b)
    {
        return (a + ih(a, b - 1));
    }
    if (b < 0)
    {
        return -ih(a, -b);
    }
}