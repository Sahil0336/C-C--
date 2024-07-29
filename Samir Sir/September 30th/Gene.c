#include <stdio.h>
int main()
{
    char gene[78];
    int i, j, p;

    printf("\nEnter gene blocks:\n-----------------------\n>");
    gets(gene);

    printf("\nNew gene blocks:\n-----------------------\n>");
    p = 0;

    for (i = 0; gene[i]; i++)
    {
        if (gene[i] == ' ')
        {
            for (j = i; j >= p; j--)
                printf("%c", gene[j]);
            p = i;
        }
    }

    for (j = i - 1; j >= p; j--)
        printf("%c", gene[j]);
    return 0;
}
/*Blocks of genes:
    Input:  AGGCT GACTC TACGTA ACTCGCA
    Output: TCGGA CTCAG ATGCAT ACGCTCA
    ----- A G C T*/