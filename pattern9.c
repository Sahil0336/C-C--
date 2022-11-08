#include<stdio.h>
int main()
{
    int i,j,h;
    printf("Enter height: ");
    scanf("%d",&h);
    for(i=1;i<=h;i++)
    {
        for(j=1;j<=h-i;j++)
        printf(" ");
        for(j=i;j>=1;j--)
        printf("%d",j);
        printf("\n");
    }
    return 0;
}