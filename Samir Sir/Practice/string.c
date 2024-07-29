/*          COMMONLY USED STRING FUNCTIONS IN C LANGUAGE
strcat: concatenate two strings
strcmp: compare two strings
strcpy: copy a string
strlen: get string length
strncat: concatenate one string part to another
strcmp: compare parts of two string
strncpy: copy part of a string
strrchr: string scanning operation
strlwr: convert all uppercase letter to lowercase
strupr: convert all lowercase letter to uppercase
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char a[20] = "program";
    char b[20] = {'p', 'r', 'o', 'g', 'r', 'a', 'm', '\0'};
    char c[20];
    printf("Enter string: ");
    gets(c);
    printf("Length of string %d \n", strlen(a));
    printf("Length of string %d \n", strlen(b));
    printf("Length of string %d \n", strlen(c));
}