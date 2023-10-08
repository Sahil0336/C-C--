#include <stdio.h>
#define n 6
int main()
{
    int i, j, c, k, output = 0;
    int arr[n] = {-1, 0, 1, 1, 2, 3};
    printf("\nEnter number of minimum children: ");
    scanf("%d", &c);
    /*for ( i = 0; i < n; i++)
    {
     printf("\nEnter [%d]: ",i);
     scanf("%d",&arr[i]);
    }*/
for ( i = 0; i < n; i++)
{
    printf(" %d ",arr[i]);
}

    for (i = 0; i < n; i++)
    {
        k = 0;
        for (j = 0; j < n; j++)
        {
            if (arr[j] == i)
            {
                k = k + 1;
            }
        }
        if (k >= c)
        {
            output = output + 1;
            k = 0;
        }
    }
    printf("\n Number of parents with %d or more children: %d\n...",c, output);
}