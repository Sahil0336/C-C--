// This code makes the first character uppercase then the second character lowercase
// Then respectively does to the rest of the characters.

// Example: input: sahil   output: SaHiL

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
        f = 1 - f;
        if (f && ch[i] != ' ')
            printf("%c", ch[i] - 32);
        else
            printf("%c", ch[i]);
    }
}