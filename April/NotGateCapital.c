#include <stdio.h>
#define n 32
int main()
{
    int i, f = 1;
    char ch[n];
    printf("\nEnter the string: ");
    gets(ch);
    printf("%c", ch[0] - 32);
    for (i = 1; ch[i]; i++)
    {
        if(ch[i]== ' ')
        f=1;
        f = 1 - f;
        if (f && ch[i]!=' ')
            printf("%c", ch[i]-32);
        else
            printf("%c", ch[i]);
    }
}