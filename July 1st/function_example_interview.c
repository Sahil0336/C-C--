#include <stdio.h>
int main()
{
    int x;
    printf("\nabc ");
    x = f1(3);
    printf("%d ", f1(x));
    printf("%d ", f3(3));
    printf("%d ", f2(2));
    printf("%d ", f2(5));
    printf("end");
    return 0;
}
int f1(int x)
{
    printf("%d ", x);
    printf("%d ", f2(x + 3));
    return 3;
}
int f2(int y)
{
    printf("%d ", y);
    return 2;
}
int f3(int z)
{
    printf("%d ", z);
    printf("%d ", f2(z + 3));
    return 4;
}