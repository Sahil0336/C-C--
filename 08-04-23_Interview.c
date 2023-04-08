#include<stdio.h>
#define n 5
int main()
{
    int a[n]={-3,2,-2,5,3};
    int i,j,k=0;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (a[i]==(a[j]*-1) && k<a[i])
            {
                k=a[i];
            }   
        }
        }
        printf("%d",k);
    }
    
