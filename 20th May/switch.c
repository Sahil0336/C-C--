#include <stdio.h>
int main()
{
    int i=0;
    switch (i)
    {
    case 0:
        i += 5;
    case 1:
        i += 2;
    case 5:
        i += 5;
    default:
        i += 4;
    }
    printf("\nFinal value: =%d ", i);
}