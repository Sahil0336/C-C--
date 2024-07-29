#include<stdio.h>
int main()
{
    int a= 31, b=32,c,d;
    c=a^b;
    d=a|b;
    printf("\n %d %d",c<<1,d<<1);
    c=c<<2;
    d=d<<2;
    printf("\n %d %d",a|c,d|b);
    a=a>>2;
    b=b>>2;
    printf("\n %d %d",a&b,a^b);
    c=a|b;
    d=c|b;
    printf("\n %d %d %d %d",a,b,c,d);
}