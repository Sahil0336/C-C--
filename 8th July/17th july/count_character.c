#include<stdio.h>
int main(){
    char ch[50];
    int i,a[26]={0};
    printf("\nEnter a string: ");
    gets(ch);
    for(i=0;ch[i];i++){
        a[ch[i]-97]++;
    }
    printf("\nNumber of elements: ");
    for(i=0;i<26;i++)
    if(a[i]!=0)
    printf("\n%c: %d",i+97,a[i]);
    return 0;
}