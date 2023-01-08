// Recursion means function calls itself
#include <stdio.h>
int main()
{
    int n;
    int display(int);
    printf("\nEnter a no.: ");
    scanf("%d", &n);
    display(n);
    return 0;
}
int display(int n)
{
    if (n)
        display(n - 1);
    printf("<%d> ", n);
}
