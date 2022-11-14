#include <stdio.h>
#define n 9
int main()
{
    int a[n] = {3, 6, 5, 2, 8, 1, 9, 7, 4};
    int i, p;
    printf("Initial array: ");
    for (i = 0; i < n; i++)
        printf(" %d ", a[i]);
    printf("\nWhich position to delete: ");
    scanf("%d", &p);
    for (i = p - 1; i < n - 1; i++)
        a[i] = a[i + 1];
    a[i] = 0;
    printf("\nModified array: ");
    for (i = 0; i < n; i++)

        printf("%d", a[i]);
    return 0;
}