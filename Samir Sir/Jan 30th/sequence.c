/* 1/1!,2/2!,3/3!,.......n no. of terms*/
#include<stdio.h>
int main()
{
    int i,n;
    float f=1;
    printf("No. of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
        printf("%.3f ",i/f);
    }
    return 0;
}