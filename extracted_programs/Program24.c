/* Objective: Write a program to find the factorial of any number */

/* Theory: Three integer variables “n” (To store Number of terms), “n_cp”
(Copy of n so that original variable doesn’t get destroyed), f (Factorial) are
taken. Factorial of “n” number of terms is calculated via while loop. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int n = 0;
int n_cp = 0;
// to create a copy of n, so that original variable
doesn't get destroyed
int f = 1;
system("cls");
printf("Enter Number: ");
scanf("%d", &n);
n_cp = n;
while (n_cp > 0)
{
f *= n_cp;
n_cp--;
}
printf("Factorial of %d is %d", n, f);
return 0;
}

/*
Sample Output:
Enter Number: 5
Factorial of 5 is 120
*/
