#include <stdio.h>
struct employee
{
    int eno;
    char n[23];
    int basic, da, hra, ma, itax;
    long int gp, np;
};
void main()
{
    struct employee e[3];
    int i;
    printf("\nEnter data of all employees:\n");
    for (i = 0; i < 3; i++)
    {
        printf("Enter employee no.%d: ", i + 1);
        scanf("%d", &e[i].eno);
        fflush(stdin);
        printf("Enter name: ");
        gets(e[i].n);
        fflush(stdin);
        printf("Enter basic pay: ");
        scanf("%d", &e[i].basic);
        fflush(stdin);
        e[i].da = e[i].basic * 0.7;
        if (e[i].basic < 5000)
            e[i].hra = e[i].basic * 0.5;
        e[i].ma = e[i].basic * 0.15;
        if (e[i].ma > 6000)
            e[i].ma = 6000;
        e[i].gp = e[i].basic + e[i].hra + e[i].ma + e[i].da;
        if (e[i].gp < 20000)
            e[i].itax = 0;
        else if (e[i].gp < 40000)
            e[i].itax = e[i].gp * 0.1;
        else if (e[i].gp < 60000)
            e[i].itax = e[i].gp * 0.2;
        else
            e[i].itax = e[i].gp * 0.3;
        e[i].np = e[i].gp - e[i].itax;
    }
    for (i = 0; i < 2; i++)
    {
        printf("\n============================================================\n");
        printf("\n	         	PAYSLIP ");
        printf("\n\n Employee Number: %d", e[i].eno);
        printf("\n Employee Name: %s", e[i].n);
        printf("			Basic Pay: %d", e[i].basic);
        printf("\n\n  DA: %d", e[i].da);
        printf("	HRA: %d", e[i].hra);
        printf("	MA: %d", e[i].ma);
        printf("\n\n		GROSS PAY: %ld", e[i].gp);
        printf("\n		Net Pay: %ld", e[i].np);
        printf("\n\n=============================================================\n\n");
    }
}
