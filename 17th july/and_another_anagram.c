#include <stdio.h>
#include <string.h>
int main()
{
    char s[50], t[50];
    int a[26] = {0}, b[26] = {0}, i;
    printf("\nEnter first string: ");
    gets(s);
    printf("\nEnter second string: ");
    gets(t);
    if (strlen(s) != strlen(t))
        printf("not anagram....");
    else
    {
        for (i = 0; s[i] && t[i]; i++)
        {
            a[s[i] - 97]++;
            b[t[i] - 97]++;
        }
        for (i = 0; i < 26; i++)
            if (a[i] != b[i])
                break;
        if (i < 26)
            printf("Not anagram...");
        else
            printf("This is anagram...");
        return 0;
    }
}