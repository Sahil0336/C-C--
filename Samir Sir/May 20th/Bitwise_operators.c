#include<stdio.h>
int main()
{
    int a=2,b=3,c=4;
    a=a<<2;
    b=b<<3;
    c=c<<4;
    printf("%d %d %d\n ",a>>1,b>>1,c>>1);
    printf("now %d %d %d\n",a,b,c);
    printf("%d %d %d\n ",a<<1,b>>2,c>>3);
    a=a>>b;
    printf("now %d %d %d\n",a,b,c);
    b=b>>c;
    printf("%d %d %d ",a,b,c);
    return 0;

}