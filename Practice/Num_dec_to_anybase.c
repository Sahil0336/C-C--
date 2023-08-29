#include <stdio.h>
int main()
{
    int n, b;
    int anybase(int, int);
    printf("\nEnter any decimal number: ");
    scanf("%d", &n);
    printf("\nEnter base value: ");
    scanf("%d", &b);
    printf("\n\nThe Result: ");
    anybase(n, b);
}
int anybase(int n, int b)
{
    int p;
    if (n)
    {
        anybase(n / b, b);
    
    if (n % b > 9)
        printf("%c", 55 + (n % b));
    else
        printf("%d", n % b);
    }
}