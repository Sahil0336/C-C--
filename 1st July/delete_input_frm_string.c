#include<stdio.h>
int main()
#define n 30
{
char ch[n],x;
int i,c=0;
printf("Enter a string: ")	;
gets(ch);
printf("Enter a character to delete:");
x=getchar();
for(i=0;ch[i];i++)
if(ch[i]!=x)
ch[c++]=ch[i];
ch[c]='\0';
printf("The modified array:%s",ch);
}