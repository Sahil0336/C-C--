#include<stdio.h>
int main()
{
    int n,f=1;
    f=f<<15;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(f)
    {
        printf("%d",n&f?1:0);
        f=f>>1;
    }
}