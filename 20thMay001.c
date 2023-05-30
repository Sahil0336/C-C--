#include<stdio.h>
int main()
{
    int k=5,t;
    for(; k<50;)
    {
    k=k+5;
    if(k==25 || k==45)
    continue;
    printf(" %d",k+5);
    k=k+5;
    }
}