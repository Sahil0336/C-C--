#include <stdio.h>
int main()
{
    char ch[34];
    int i;
    printf("\nEnter a string: ");
    gets(ch);
    for (i = 0; ch[i] != '\0'; i++)
        ;
    for (--i; i >= 0; i--)
        if (ch[i] == ' ' || i == 0)
            printf("\n%s", &ch[i]);
    return 0;
}