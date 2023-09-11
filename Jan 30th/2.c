#include<stdio.h>
int main()
{
    int x=5,y=7,t;
    if(++x<y++)
    t=x++;
    else
    t=y++;
    printf("%d\n",t);
    if(t++>y)
    x=y++;
    printf("%d\t%d\t%d",x,y,t);
    return 0;
}