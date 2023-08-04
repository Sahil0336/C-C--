#include<stdio.h>
int main()
{
    int i,j,h;
    printf("Enter height: ");
    scanf("%d",&h);
    for(i=1;i<=h;i++)
    {
        for(j=1;j<=h-i;j++)
        printf("  ");
        for(j=1;j<=i;j++){
        if((j==1)||(j==i)||(i==h)){
        printf(" *"); }
        else{
        printf("  ");}}
        printf("\n");
    }
    return 0;
}