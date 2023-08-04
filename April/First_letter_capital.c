#include<stdio.h>
#include<ctype.h>
# define n 32
int main()
{
    int i;
    char ch[n];
    
    printf("Enter the string: ");
    gets(ch);
    ch[0]=ch[0]-32;
    for ( i = 1; ch[i]; i++)
    {
        if(ch[i-1]== ' ')
        ch[i]=toupper(ch[i]);
    }
    printf("%s",ch);
}