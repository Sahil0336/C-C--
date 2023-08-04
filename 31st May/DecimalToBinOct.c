#include <stdio.h>
int main()
{
    int n, b;
    int DecimalToBinary(int, int);
    printf("\nEnter Number and Base: ");
    scanf("%d%d", &n, &b);
    printf("The result: ");
    DecimalToBinary(n, b);
    return 0;
}
int DecimalToBinary(int n, int b)
{
    if (n)
    {
        DecimalToBinary(n / b, b);
        printf("%d ", n % b);
    }
}