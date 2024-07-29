#include <stdio.h>
int main()
{
    int i;
    char ch[23];
    printf("\nEnter a string: ");
    gets(ch);
    for (i = 0; ch[i]; i++)
        printf("\n%c", ch[i]);
    return 0;
}