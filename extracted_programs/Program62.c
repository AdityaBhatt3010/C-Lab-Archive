/* Objective: Write a C Program to Calculate the factorial of a number using
function */

/* Theory: Using user defined function “fact”, the factorial of ‘n’ is calculated
and hence displayed. */

#include<stdio.h>
#include<stdlib.h>
int fact(int);
int main()
{
int n = 0;
system("cls");
printf("Enter Number: ");
scanf("%d", &n);
printf("Factorial of %d is %d", n, fact(n));
return 0;
}
int fact(int n)
{
int i = 0;
int f = 1;
for (i = 1; i <= n; i++)
{
f *= i;
}
return f;
}

/*
Sample Output:
Enter Number: 5
Factorial of 5 is 120
*/
