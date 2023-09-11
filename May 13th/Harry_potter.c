#include <stdio.h>
int main()
{
    int i, j, m, n;
    char ch[20];
    printf("Enter a string: ");
    gets(ch);
    for (i = 0; ch[i]; i++)
    {
        printf("\n%s", &ch[i]);
        for (j = 0; j < i; j++)
            printf("%c", ch[j]);
    }
    return 0;
}
