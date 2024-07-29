/* Given an integer number , repeatedly add all digits until
the result has only one digits to return*/
#include <stdio.h>
int main()
{
    int n, s;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    while (n > 9)
    {
        s = 0;
        while (n > 0)
        {
            s = s + n % 10;
            n = n / 10;
        }
        n = s;
    }
    printf("\n>>output: %d", n);
    return 0;
}