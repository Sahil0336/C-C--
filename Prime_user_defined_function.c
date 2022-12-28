#include <stdio.h>
int prime(int x)
{
    int i;
    for (i = 2; i < x / 2; i++)
        if (x % i == 0)
            return 0;
    return 1;
}
int main()
{
    int num, l = 0;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    l = prime(num);
    if (l == 0)
        printf("\n%d IS NOT A PRIME NUMBER", num);
    else
        printf("\n%d IS A PRIME NUMBER", num);
    return 0;
}
