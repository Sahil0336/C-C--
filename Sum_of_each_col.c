#include <stdio.h>
#define n 3
int main()
{
    int a[n][n];
    int i, j, s[n];
    printf("\nInsert your array elements: \n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            printf("Enter [%d][%d] elements: ", i, j);
            scanf("%d", &a[i][j]);
        }
    printf("\nYour 2D array is: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf(" %d", a[i][j]);
        printf("\n");
    }
    for (i = 0; i < n; i++)
    {
        s[i] = 0;
        for (j = 0; j < n; j++)
        {
            s[i] = s[i] + a[j][i];
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("\nSum of col[%d]: %d", i + 1, s[i]);
    }
    return 0;
}