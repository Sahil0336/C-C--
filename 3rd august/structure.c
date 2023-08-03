#include<stdio.h>
struct Student
{
    int r;
    char n[25];
    int m1;
    int m2;
    int t;
    char gr;
};

int main()
{
    struct Student s[2];
    int i;
    printf("\nEnter data of all students:\n");
    for (i = 0; i < 2; i++)
    {
        printf("Enter roll no. of student %d: ", i + 1);
        scanf("%d", &s[i].r);
        printf("\nEnter name: ");
        fflush(stdin);
        gets(s[i].n);
        printf("Enter marks of first subject: ");
        scanf("%d", &s[i].m1);
        printf("Enter marks of second subject: ");
        scanf("%d", &s[i].m2);
        s[i].t = s[i].m1 + s[i].m2;
        if (s[i].t < 80)
            s[i].gr = 'F';
        else if (s[i].t < 100)
            s[i].gr = 'C';
        else if (s[i].t < 120)
            s[i].gr = 'B';
        else if (s[i].t < 140)
            s[i].gr = 'A';
        else if (s[i].t >= 140)
            s[i].gr = 'S';
    }
    printf("\nThe Result of the Students: \n");
    printf("Roll no.  Name    Marks1  Marks2  Total   Grade\n");
    for (i = 0; i < 2; i++)
    printf("   %d     %s       %d      %d      %d      %c\n", s[i].r, s[i].n, s[i].m1, s[i].m2, s[i].t, s[i].gr);
}