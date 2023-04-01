#include<stdio.h>
int main()
{
    int i,j,n;
    printf("\nEnter height: ");
    scanf("%d",&n);
    for(i=1;i<2*n;i++)
    {
        for(j=1;j<2*n;j++)
        {
            if(i==j || j==2*n-i)
            {
                if(i<=n)
                {
                    printf("%d",i);
                
                }
                else{
                    printf("%d",2*n-i);
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