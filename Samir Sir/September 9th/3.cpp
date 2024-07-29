#include<iostream>
int main()
{
  char ch[]="GATE 2023";
  char *p =ch;
  printf("\n%s",p+p[3]-p[1]);
  return 0;
}