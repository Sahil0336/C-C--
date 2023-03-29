#include<stdio.h>
int main()
{
    int i,j,h,t=1,k;
    printf("\nEnter height: ");
    scanf("%d",&h);
    for(i=1;i<=h;i++)
    {  k=t;
    for(j=1;j<=i;j++)
    printf("%d ",k--);
    t=t+j;
    printf("\n");
    }
}  