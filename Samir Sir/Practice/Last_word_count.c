#include<stdio.h>
#define n 30
int main()
{
    int len=0,i,k=0;
    char ch[n];
    printf("Enter a string: ");
    gets(ch);
    for(i=0;ch[i];i++)
    {
        if(ch[i] != ' ')
        {
            if(!k)
            {
                len=1;
                k=1;
            }
            else
                len++;
        }
        else
        {
            k=0;
        }
    }
    printf("Length of last character is %d",len);
    return 0;
}