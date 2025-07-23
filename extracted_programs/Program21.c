/* Objective: Write a program to find gross salary of employee if DA is 40%
of basic Salary and HRA is 20% of basic salary. Basic salary will be entered
as input by keyboard. */

/* Theory: Four float integers ‘s’ (Basic Salary), “DA” (DA), “HRA” (HRA), gs
(Gorss Salary). ‘s’ is user-input, “DA” and “HRA” are calculated as
0.4*salary and 0.6*salary respectively. Hence, Gross Salary is Basic Salary
+ DA + HRA which is then displayed. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
float s = 0;
float DA = 0;
float HRA = 0;
float gs = 0;
system("cls");
printf("Enter Basic Salary : ");
scanf("%f", &s);
DA = (0.4)*s;
HRA = (0.2)*s;
gs = s + DA + HRA;
printf("Gross Salary : %f", gs);
return 0;
}

/*
Sample Output:
Enter Basic Salary : 50
Gross Salary : 80.000000
*/
