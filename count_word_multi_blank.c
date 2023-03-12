#include<stdio.h>
int main()
{
    int i ,k=1;
    char ar[32]={  };
    char ch[32];
    printf("Enter a string: ");
    gets(ch);
    for(i=0;ch[i];i++)
    if(ch[i]!=' ' && ch[i+1]==' ')
    k++;
    printf("No. of words are %d",k);
    return 0;
}