#include<stdio.h>
int main()
{
  int i,j,h;
  printf("Enter height: ");
  scanf("%d",&h);
  for(i=h;i>=1;i--)
  {
    for(j=1;j<=i;j++)
      printf(" ");
    for(j=h;j>=i;j--)
      printf("%d",j);
    printf("\n");
  }
  return 0;
}