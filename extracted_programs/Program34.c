/* Objective: Write a program to find the sum of following series:
S = 1/1! + 2/2! + 3/3! + ………….. 7 terms */

/* Theory: Two integers “i”, “j” and “n” (number of terms) along with two
float “sum” (sum of series) and “fact” (factorial) have been taken.
Hence the sum of the series is calculated and hence is displayed. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int i = 0;
int j = 0;
int n = 0;
float sum = 0;
float fact = 0;
system("cls");
printf("Enter the number of terms: ");
scanf("%d", &n);
for (i = 1; i <= n; i++)
{
fact = 1;
for (j = 1; j <= i; j++)
{
fact *= j;
}
sum += i / fact;
}
printf("Sum of series upto %d terms = %.2f", n, sum);
}

/*
Sample Output:
Enter the numbers of terms: 5
Sum of series upto 5 terms = 2.71
*/
