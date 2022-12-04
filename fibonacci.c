#include<stdio.h>
int main()
{
    int f1=1,f2=0,f3=0,n,i;
    printf("No. of terms:\t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d..",f3);
        f3=f1+f2;
        f1=f2;
        f2=f3;
    }
    return 0;
}
