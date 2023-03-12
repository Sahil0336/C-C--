#include <stdio.h>
int main()
{
    char ch[34];
    int i,k=0;
    printf("\nEnter a string: ");
    gets(ch);
    for (i = 0; ch[i] != '\0'; i++)
    k = k+1;
    for (i=0; i<=k-1; i++)
        if (ch[i] == ' ' || i == 0)
            printf("\n%s", &ch[i]);
    return 0;
}