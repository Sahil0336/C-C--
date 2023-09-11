#include <stdio.h>
#define n 20
int main()
{
    char ch[n], op[n];
    int i;
    printf("Enter the output: ");
    gets(ch);
    for (i = 0; ch[i]; i++)
    {
        if (ch[i - 1] == ' ' && ch[i] != ' ' || i == 0)
        {
            
            if (ch[i] > 96)
                printf(" %c", ch[i] - 32);
            else
                printf(" %c", ch[i]);
        }
    }
    for (--i; i > 0; i--)
    {
        if (ch[i] == ' ')
        {
            printf("%s", &ch[i + 2]);
            break;
        }
    }
}