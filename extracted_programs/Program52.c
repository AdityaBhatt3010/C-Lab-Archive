/* Objective: Write a program to convert decimal number to binary number. */

/* Theory: Seven integers “a”, “b”, “c”, “d”, “e”, “f” and “n” (number of
variables) along with three integer arrays each of size 32 “x”, “y” and “z”
have been taken. Binary of the decimal number is calculated and number
and is printed in groups of four bits along with a space after every 4 bits. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int a = 0;
int b = 0;
int c = 0;
int d = 0;
int e = 0;
int f = 0;
int n = 0;
int x[32];
int y[32];
int z[32];
system("cls");
printf("Enter Decimal Number : ");
scanf("%d", &n);
printf("\n");
f = n;
while (n > 1)
{
x[a] = n % 2;
n /= 2;
a++;
}
x[a] = n;
n = f;
b = a;

while (b >= 0)
{
y[c] = x[b];
c++;
b--;
}
b = 4 - ((a+1) % 4);
c = b;
while (b >= 0)
{
z[b] = 0;
b--;
}
for (d = c; d <= a + c; d++)
{
z[d] = y[e];
e++;
}
printf("Binary of %d is : ", n);
for (d = 0; d <= a + c; d++)
{
if ((d != 0) && (d % 4 == 0))
{
printf(" ");
}
printf("%d", z[d]);
}
}

/*
Sample Output:
Enter Decimal Number : 45
Binary of 45 is : 0010 1101
*/
