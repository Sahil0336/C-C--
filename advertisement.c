#include <stdio.h>
int main()
{

    long int batch;
    int n, s = 0;
    printf("Enter batch: ");
    scanf("%ld", &batch);
    while (batch > 0)
    {
        n = batch % 10;
        if (n % 2 == 0)
        {
            s = s + n;
        }
        batch = batch / 10;
    }
    printf("Total ad = %d", s);
    return 0;
}