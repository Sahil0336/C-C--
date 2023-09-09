#include<iostream>
using namespace std;
int func(int n)
{
    int c=2;
    while (n)
    {
        c++;
        n=n>>2;
    }
    return c;
}
int main()
{
    printf("%d",func(435));
}