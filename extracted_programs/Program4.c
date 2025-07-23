/* Objective: Write a C program to simple interest */

/* Theory: Four variables float “SI” (Simple Interest), float ‘P’ (Principle),
integer ‘T’ (Tenure) and float ‘R’ (Rate of Interest) are taken. Then by
using the formula SI = (P*T*R) / 100, the simple interest if calculated and
hence displayed. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
float SI = 0 ;
float P = 0;
int T = 0;
float R = 0;
system("cls");
printf("Enter Principle Amount : ");
scanf("%f", &P);
fflush(stdin);
printf("Enter Tenure : ");
scanf("%d", &T);
fflush(stdin);
printf("Enter Rate of Interest : ");
scanf("%f", &R);
fflush(stdin);
printf("\n");
SI = ((P*T*R) / 100);
printf("%f", SI);
return 0;
}

/*
Sample Output:
Enter Principle Amount : 35
Enter Tenure : 3
Enter Rate of Interest : 45
47.250000
*/
