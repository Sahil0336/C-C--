#include <stdio.h>
int main()
{
    int n, s = 0, p;
    printf("\nEnter how many terms: ");
    scanf("%d", &n);
    while (n)
    {
        printf("\nEnter price: ");
        scanf("%d", &p);
        s = s + p;
        n--;
    }
    int i = 1, x = 1;
    while (s > x)
    {
        x = i * i * i;
        i++;
    }
    if (s == x)
        printf("Given...");
    else
        printf("Pay Rs: %d", x - s);
    return 0;
}