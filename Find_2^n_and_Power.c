#include<stdio.h>
int main()
{
    int a;
    int check(int);
    
    printf("Enter the number: ");
    scanf("%d",&a);
    if(check(a))
    printf("Yes the power is in power of two");
    else
    printf("Not in power of two form");
    printf("The power of two is %d",PowerValue(a));
    }
    
    int check(int n)
    {
        if((n&(n-1))==0)
        return 1;
        else
        return 0;
    }
    int PowerValue(int n)
    {
        int i=0;
        while(n>1)
        {
            n=n/2;
            i++;
        }
        return i;
    }
