#include <stdio.h>
#define n 4
int main()
{
    int a[n][n] = {9, 1, 2, 8, 5, 6, 4, 9, 3, 4, 1, 8, 6, 7, 3, 5};
    int max, min, i, j, p, x, f = 1;
    for (i = 0; i < n; i++)
    {
        min = a[i][0];
        p = 0;
        for (j = 0; j < n; j++)
        {
            if (min > a[i][j])
            {
                min = a[i][j];
                p = j;
            }
            max = a[0][p];
            x = 0;
            for (j = 0; j < n; j++)
            {
                if (max < a[j][i])
                {
                    max = a[j][p];
                    x = j;
                }
            }
            if (max == min)
            {
                printf("\nSaddle point is at [%d,%d]...", p, x);
                f = 0;
            }
            if (f)
            {
                printf("\nThere is no saddle point...");
            }
        }
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}