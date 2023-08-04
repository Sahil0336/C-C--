#include<stdio.h>
int main()
{
    int a=5,b=7,c,d;
    if(++a>7)
    c=++a;
    else
    c=a++;
    if(++c>5)
    d=c++;
    else
    d=++a;
    printf("%d\t%d\t%d\t%d",a,b,c,d);
    return 0;
}

