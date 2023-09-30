#include <stdio.h>
#define n 5

int main()
{
    int i, j, p, a, del = 0;
    int arr[n];

    printf("------------------\nEnter array elements: \n");

    for (i = 0; i < n; i++)
    {
        printf("\n%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nThe array elements are: \n----------------------\n");

    for (i = 0; i < n; i++)
        printf(" %d ", arr[i]);

    for (i = 0; i < n; i++)
    {
        p = arr[i];
        arr[i] = 0;
        for (j = i + 1; j < n; j++)
            if (arr[j] == p + 1 || arr[j] == p - 1)
                arr[j] = 0;

        del = del + p;
    }
    printf("\n\nMaximum Dumpling PO Can eat is: %d\n---------------------", del);
    return 0;
}
/*  Po can choose an element P from the array. and delete that element along with all the elements value P+1 and P-1.
    For this move, he will get P dumplings.
    Explaination: Return the maximum number of dumplings po can eat.
    for arr[3,3,4,5,4]
    1st step: choose 3 that means all 4 are deleted and the array becomes [3,5]
    2nd step: now po choose 3 and the array becomes [5]
    final: so po can eat 3+3+5=11 dumplings...*/