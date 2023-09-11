//linear complexity
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[50], hc[50];
    int i,chlen=0,hclen=0;len=0;
    printf("\nEnter the first string: ");
    gets(ch);
    printf("\nEnter the second string: ");
    gets(ch);
    chlen=strlen(ch);
    hclen=strlen(hc);
    if(chlen==hclen)
    {len=chlen;
        for(i=0;i<len;i++)
        {
            for(j=0;j<len;j++)
            {
                if(ch[i]==hc[j])
                {
                    found=1;
                    break;
                }
            }
            if(found==0)
            {
                notfound=1;
                break;
            }
        }
        
    }
}