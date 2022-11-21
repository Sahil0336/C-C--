// The first line of the input contains three integers A,B and M
// The output prints all the numbers which are divisible by M ranged between A and B
#include <stdio.h>
int main()
{
    int a, b, m, i;
    printf("\nEnter 1st number of range: ");
    scanf("%d", &a);
    printf("\nEnter 2nd number of range: ");
    scanf("%d", &b);
    printf("\nEnter divisible number: ");
    scanf("%d", &m);
    for (i = 0; i <= b; i++)
        if (i % m == 0)
            printf(" %d ", i);
    return 0;
}