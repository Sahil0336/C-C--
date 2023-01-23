#include <stdio.h>
int hcf(int, int);
int main()
{
    int a, b;
    printf("Enter two Numbers: ");
    scanf("%d%d", &a, &b);
    printf("HCF is %d", hcf(a, b));
    return 0;
}
int hcf(int a, int b)
{
    if (b)
        return hcf(b, a % b);
    else
        return a;
}