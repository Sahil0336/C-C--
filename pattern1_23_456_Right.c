#include<stdio.h>
int main()
{
    int i,j,h,t=1;
    printf("Enter height: ");
    scanf("%d",&h);
    for(i=1;i<=h;i++)
    {
       for(j=1;j<=i;j++)
       {
        printf("%d",t);
        t++; 
        }
        printf("\n");
    }
    return 0;
}