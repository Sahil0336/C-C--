#include <stdio.h>
int main()
{
    int x = 0,y = 0;
    unsigned int rows = 0;
    printf("\nEnter the number of rows = ");
    scanf("%u",&rows);
    for(x=1; x<=rows; x++)
    {
        for(y=1; y <= x; y++)
        {
            if((y==1) || (y==x) || (x==rows))
            {   
                printf("*");
            }
            else
            {             
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}