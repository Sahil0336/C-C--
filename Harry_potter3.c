#include<stdio.h>
#include<string.h>
#define n 50
int main()
{
    int i,j,l,k;
    char ch[n],c[n];
    printf("\nEnter the string: ");
    gets(ch);
    l=strlen(ch);
    while(1)
    {
        j=0;
    for(i=l-1;ch[i];i++)
    ch[j++]=c[i];
    for(i=0;i<l-1;i++)
    ch[j++]=c[i];
    ch[j]=' ';
    k++;
    if (strcmp(ch,c)==0)
    {
    break;
    }
    
}
printf("No. of rotation = %d",k);
}