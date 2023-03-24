#include<stdio.h>
int main()
{
    int i,j,h;
    printf("\nEnter height: ");
    scanf("%d",&h);
    for(i=1;i<2*h;i++)
    {
        for(j=1;j<2*h;j++)
        {
            if(i==j || j==2*h-i)
            {
                if(i<=h)
                {
                    printf("%d",i);
                
                }
                else{
                    printf("%d",2*h-i);
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}