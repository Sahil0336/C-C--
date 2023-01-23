#include <stdio.h>
int power(int, int);
int main()
{
    int b, p;
    printf("Enter two Numbers: ");
    scanf("%d%d", &b, &p);
    printf("Power is %d", power(b, p));
    return 0;
}
int power(int b, int p)
{
    int r = 1;
    while (p)
    {
        r = r * b;
        p--;
    }
    return r;
}