#include <stdio.h>
float avg(int, int);
int main()
{
    int a, b;
    float average;
    printf("\nEnter two numbers: ");
    scanf("%d%d", &a, &b);
    average = avg(a, b);
    printf("\nThe average of %d and %d is: %.2f", a, b, average);
    return 0;
}
float avg(int x, int y)
{
    float z;
    z = (float)(x + y) / 2;
    return z;
}