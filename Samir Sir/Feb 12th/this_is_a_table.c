#include <stdio.h>
int main()
{
    char ch[34];
    int i;
    printf("\nEnter a string: ");
    gets(ch);
    for (i = 0; ch[i]; i++)
        if (ch[i] == ' ')
            printf("\n");
        else
            printf("%c", ch[i]);
    return 0;
}