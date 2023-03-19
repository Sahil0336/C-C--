#include<stdio.h>
int main()
{
    char ch[30];
    int i,j,x;
    printf("\nEnter a string: ");
    gets(ch);
    for(i=0;ch[i];i++);
    x = --i;
    for(;i>=0;i--)
    if(ch[i]==' ' || i==0)
    {
        for(j=i;j<=x;j++)
        printf("%c",ch[j]);
        x=i;
    }

}