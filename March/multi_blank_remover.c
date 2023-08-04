#include<stdio.h>
int main()
{
    int i ;
    char ch[32];
    printf("Enter a string: ");
    gets(ch);
    for(i=0;ch[i];i++)
    if(ch[i]!=' ' || ch[i+1]!=' ')
    printf("%c",ch[i]);
    return 0;
}