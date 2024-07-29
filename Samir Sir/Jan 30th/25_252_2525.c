#include<stdio.h>
int main()
{
    int n,t=3,i;
    printf("\n How many terms:");
    scanf("%d",&n);
    for(i=2;i<=n+1;i++)
    {
        printf("%d\t",t);
       // t=t*10 + 5-3*(i%2); for 25 252 2525
       /*t=t*10 + 7 -4*(i%2);*/ // for 37 373 3737
       t=t*10 +10 - (t%10);
    }
    return 0;
}