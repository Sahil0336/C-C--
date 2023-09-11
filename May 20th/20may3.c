#include<stdio.h>
int main()
{
    int c=2,n=435;
    while(n)
    {
        c++;
        n>>=2;
    }
    printf("\n %d",c);
}