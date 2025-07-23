/* Objective: Write macro definition with arguments for calculation of simple
interest and amount. Store these macro definitions in a file called ‘Interest.h”.
Include this file in your program and use the macro definition for calculating
simple interest and amount. */

/* Theory: “p”, “t”, “r” are variables to store principal, rate and time period.
Macros “SI” and “AMT” receive values of “p”, “t” and “r”. */

/*
interst.h
#define SI(p,r,t) ((p*r*t)/100)
#define AMOUNT(p) (SI(p,r,t)+p)
#include<stdio.h>
#include<conio.h>

*/
#include<stdio.h>
#include<stdlib.h>
#include "interest.h"
int main()
{
float p, t, r;
system("cls");
printf("Enter principal amount\n");
scanf("%f", &p);
printf("Enter Rate of Interest\n");
scanf("%f", &r);
printf("Enter Time Period\n");
scanf("%f", &t);
printf("Simple Interest: %0.2f\n", SI(p, t, r));
printf("Total Amount: %0.2f\n", AMT(p, t, r));

return 0;
}

/*
Sample Output:
Enter principal amount
1000
Enter Rate of Interest
5
Enter Time Period
5
Simple Interest: 250.00
Total Amount: 1250.00
*/
