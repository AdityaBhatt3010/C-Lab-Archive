/* Objective: Write a program to print Fibonacci sequence 0 1 1 2 3 5 8
13…… N terms and prints the sum of sequence. */

/* Theory: Integers “n” (Number of terms of Fibonacci Series), “a”, “b”, “z”,
“s” (Sum of the Series) along with an integer array “x” of length 30 (to
store the Fibonacci series) are taken and hence the Fibonacci series and
it’s sum is calculated and hence displayed. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int n = 0;
int a = 0;
int b = 0;
int z = 0;
int x[30];
int s = 0;
system("cls");
// n = 5;
printf("Enter Number : ");
scanf("%d", &n);
x[0] = 0;
x[1] = 1;
if (n > 0)
{
x[0] = 0;
a = 0;
}
if (n >= 1)
{
x[1] = 1;
b = 1;
}

if (n >= 2)
{
for (z = 2; z <= n-1; z++)
{
x[z] = a + b;
a = x[z-1];
b = x[z];
//
printf("%d, %d\n", a, b);
}
}
for (z = 0; z <= n-1; z++)
{
if (z != n-1)
{
printf("%d, ", x[z]);
s += x[z];
}
else
{
printf("%d is the Required Series", x[z]);
s += x[z];
}
}
printf("\nSum of the Series: %d", s);
return 0;
}

/*
Sample Output:
Enter Number : 10
0, 1, 1, 2, 3, 5, 8, 13, 21, 34 is the Required Series
Sum of the Series: 88
*/
