#include <stdio.h>
#define n 3
int main()
{
    int a[n][n];
    int i, j;
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
    return 0;
}