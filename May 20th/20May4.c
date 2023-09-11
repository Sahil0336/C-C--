#include<stdio.h>
int main()
{
    int a=1,b=1,c,d;
    c=++a || b++;
    d=b-- && --a;
    printf("\n a=%d\t b=%d\t c=%d\t d=%d",a,b,c,d);
}