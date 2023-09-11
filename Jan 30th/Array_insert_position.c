#include <stdio.h>
#define n 7
int main()
{
    int a[n] = {6, 9, 4, 7, 3, 2, 5};
    int i, x, p;
    printf("\nArray elements: ");
    for (i = 0; i < n; i++)
        printf(" %d", a[i]);
    printf("\nEnter position: ");
    scanf("%d", &p);
    printf("\nEnter value: ");
    scanf("%d", &x);
    for (i = 6; i > p; i--)
        a[i] = a[i - 1];
    a[p] = x;
    printf("\nModified elements: ");
    for (i = 0; i < n; i++)
        printf(" %d", a[i]);
}