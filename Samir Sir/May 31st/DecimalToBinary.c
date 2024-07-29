#include <stdio.h>
int main()
{
    int a;
    int DecimalToBinary(int, int);
    printf("\nEnter any number: ");
    scanf("%d", &a);
    printf("The result: ");
    DecimalToBinary(a, 2);
    return 0;
}
int DecimalToBinary(int a, int b)
{
    if (a)
    {
        DecimalToBinary(a / b, b);
        printf("%d ", a % b);
    }
}