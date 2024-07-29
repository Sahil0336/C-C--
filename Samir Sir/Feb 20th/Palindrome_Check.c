#include <stdio.h>
int main()
{
    char ch[30];
    int i, j;
    printf("\nEnter a string: ");
    gets(ch);
    for (i = 0; ch[i]; i++)
        ;
    for (j = 0, --i; j < i; j++, i--)
        if (ch[i] != ch[j])
        {
            break;
        }
    if (j < i)
    {
        printf("Not Palindrome...");
    }
    else
        printf("Palindrome...");
    return 0;
}