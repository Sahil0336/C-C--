#include <stdio.h>
char a[] = "0123456789ABCDEF";
int main()
{
    int n, b;
    int anybase(int, int);
    printf("\nEnter Number: ");
    scanf("%d", &n);
    printf("Enter base to convert: ");
    scanf("%d", &b);
    printf("The result: ");
    anybase(n, b);
}
int anybase(int n, int b)
{
    if (n)
    {
        anybase(n / b, b);
        printf("%c", a[n % b]);
    }
}
